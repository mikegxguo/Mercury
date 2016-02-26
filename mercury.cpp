//============================================================================
// Name        : mercury;pp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "spLanguages.h"
#include <stdio.h>
#include <string.h>
#include "stringID.h"
#include "stringID-test.h"
//#include "string_src.h"
#include "GUI_Type.h"


void WriteStr2File(const char* pFileName,  char* pStr)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		fprintf( stream, "%s", pStr);
		fclose( stream );
}

//if the data file is too long, should adjust this value.
#define MAX_FILE_LEN		1024*12
int ReadFile2Str(const char* pFileName, char* pStr)
{
		FILE *stream;
		stream = fopen(pFileName, "r" );
		fseek(stream, 0L, SEEK_END);
		int len = ftell(stream);
		rewind(stream);
		if(len < MAX_FILE_LEN)
		{
				fread(pStr, 1, len, stream);
		} else {
				//ASSERT(0);
		}
		fclose( stream );
		return len;
}

void WriteAscIICode2File(const char* pFileName, char ch)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		fprintf( stream, "0x%02X, ", (unsigned char)ch);
		fclose( stream );
}

void WriteLine2File(const char* pFileName)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		fprintf( stream, " \n");
		fclose( stream );
}

void WriteLengthData2File(const char* pFileName, unsigned short  lenStart, unsigned short lenStr)
{
#if 1 //for binary file
		FILE *stream;
		stream = fopen( pFileName, "a+" );
		fwrite(&lenStart, sizeof(unsigned short), 1, stream);
		fwrite(&lenStr, sizeof(unsigned short), 1, stream);
		fclose( stream );
#else //for array file
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		//fprintf( stream, "{%d, %d}, ", lenStart, lenStr); //the data length maybe 6 char
		fprintf( stream, "0x%x, 0x%x, 0x%x, 0x%x, ", lenStart&0xFF, (lenStart&0xFF00)>>8, lenStr&0xFF, (lenStr&0xFF00)>>8);
		fclose( stream );
#endif
}

void WriteSum2File(const char* pFileName, int sum)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		fprintf( stream, "%d, ", sum); //the data length maybe 6 char
		fclose( stream );
}

void WriteStrData2File(const char* pFileName,  const char* pStr, int len)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		//fprintf( stream, "{%d, %d}, ", lenStart, lenStr); //the data length maybe 6 char
		fwrite(pStr, len, 1, stream);
		fclose( stream );
}

//default English, unicode coding, should save it with UTF-8 coding
//should change it when MUI mode
#define STRING_DATA_FILE    "string.data"
#define STRING_LEN_FILE       "string.length"
void ProduceStrFile(int langID, const char* pFileName)
{
		remove(STRING_DATA_FILE);
		remove(STRING_LEN_FILE);
		remove(pFileName);

		char* ptemp = NULL;
		unsigned short lenStr = 0;
		unsigned short lenTotal = 0;
		for(int stringID=0; stringID<IDS_BEST_MARATHON+1; stringID++)
		{
				ptemp = (char*)((STRINGSDEF*)(language_list[langID].xStringTable)+stringID)->sStringdef;
				if(ptemp)
				{
						WriteStr2File(STRING_DATA_FILE, (char*)ptemp);
						lenStr = (unsigned short)strlen(ptemp);
				}
				else
				{
						lenStr = 0;
				}
				WriteLengthData2File(STRING_LEN_FILE, lenTotal, lenStr);
				lenTotal += lenStr;
				lenStr = 0;
		}

		//joint the two files(length, data)
#if 1
		char tempbuf[MAX_FILE_LEN] = {0};
		char* pTemp = tempbuf;
		int len = 0;
		len = ReadFile2Str(STRING_LEN_FILE, pTemp);
		WriteStrData2File(pFileName, pTemp, len);
		len = ReadFile2Str(STRING_DATA_FILE, pTemp);
		WriteStrData2File(pFileName, pTemp, len);
#endif

		remove(STRING_DATA_FILE);
		remove(STRING_LEN_FILE);
}


#include "stdafx.h"
#define ICON_DATA_FILE    "icon.data"
#define ICON_LEN_FILE       "icon.length"
void addIcon2DataFile(const char* pFileName, const GUI_BITMAP GUI_UNI_PTR * pBitmap)
{
		if(pBitmap) {
				FILE *stream;
				stream = fopen( pFileName, "a+" );

				unsigned short  ID = 0x4D42; //BM
				unsigned short  Format = 100;
				unsigned short  XSize        = pBitmap->XSize;
				unsigned short  YSize        = pBitmap->YSize;
				unsigned short  BytesPerLine = pBitmap->BytesPerLine;
				unsigned short  BitsPerPixel   =  pBitmap->BitsPerPixel;
				int  NumColors    = ((GUI_LOGPALETTE*)(pBitmap->pPal))->NumEntries;
				unsigned short  HasTrans        =  0;
				unsigned int colors[] = {0x00FFFFFF, 0x00000000, };

				unsigned char *p = (unsigned char *)(pBitmap->pData);
				int len = YSize*BytesPerLine;

				fwrite(&ID, sizeof(unsigned short), 1, stream);
				fwrite(&Format, sizeof(unsigned short), 1, stream);
				fwrite(&XSize, sizeof(unsigned short), 1, stream);
				fwrite(&YSize, sizeof(unsigned short), 1, stream);
				fwrite(&BytesPerLine, sizeof(unsigned short), 1, stream);
				fwrite(&BitsPerPixel, sizeof(unsigned short), 1, stream);
				fwrite(&NumColors, sizeof(unsigned short), 1, stream);
				fwrite(&HasTrans, sizeof(unsigned short), 1, stream);
				fwrite(&colors[1], sizeof(unsigned int), 1, stream);
				fwrite(&colors[0], sizeof(unsigned int), 1, stream);

				fwrite(p, len, 1, stream);
				fclose( stream );

				stream = fopen( ICON_LEN_FILE, "a+" );
				fprintf( stream, "%d, ", len+24);
				fclose( stream );
		}
}

void WriteData2File(const char* pFileName,  unsigned char* pStr, int len)
{
		FILE *stream;
		stream = fopen(pFileName, "a+" );
		fwrite(pStr, len, 1, stream);
		fclose( stream );
}

#define DATA_INTEGRATED       "integrated.data"
void IntegrateData2File(const char * pFileName,  int sectors)
{
	unsigned char TempBuf[4096];
    FILE    * pFile;
    pFile = fopen(pFileName, "r");
    int counter = 0;
    if(pFile)
    {
			fseek(pFile, 0L, SEEK_END);
			int dwLen = ftell(pFile);
			rewind(pFile);
			//fseek (pFile ,0, SEEK_SET);
			for(int num=0; num<sectors;num++)
			{
					fseek(pFile, 4096*counter, SEEK_SET);
					if(dwLen>=4096)
					{
							fread(TempBuf, 1, 4096, pFile);
							dwLen -= 4096;
					}
					else // length <4096
					{
							fread(TempBuf, 1, dwLen, pFile);
							for(int i=dwLen; i<4096; i++) TempBuf[i] = 0x0;
							dwLen = 0;
					}
					WriteData2File(DATA_INTEGRATED, TempBuf, 4096);
					counter++;
			}
			fclose(pFile);
			cout << "TempBuf: "<<counter << endl;
			//remove(pFileName);
    }
}


typedef struct {
		const unsigned short size;
		const char* filename;
}DataDef;

#define FontNum			5
const DataDef FontDef[FontNum]={
		{2760, "xbf/DIN16.xbf"}, //1
		{3419, "xbf/DIN19.xbf"}, //1
		{5024, "xbf/DIN24.xbf"}, //2
		{7144, "xbf/DIN32.xbf"}, //2
		{2816, "xbf/MyriadPro64.xbf"}, //1
};

#define StrNum			1//1
const DataDef StringDef[StrNum]={
		{4091,    "string_src_en.str"}, //1
		//{8561,    "string_src_de.str"}, //3
		//{9179,    "string_src_es.str"}, //3
		//{11078,   "string_src_fr.str"}, //3
		//{8525,     "string_src_it.str"}, //3
		//{8559,     "string_src_nl.str"}, //3

};

const DataDef IconDef[]={
		{17130,    "icon.data"}, //need 5 sectors
};


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	if(1){
			cout << "String, MUI  ......" << endl;
			ProduceStrFile(0, "string_src_en.str");
			//ProduceStrFile(3, "string_src_de.str");
			//ProduceStrFile(5, "string_src_es.str");
			//ProduceStrFile(6, "string_src_fr.str");
			//ProduceStrFile(8, "string_src_it.str");
			//ProduceStrFile(11, "string_src_nl.str");
	}

	if(0){
			cout << "Sum ......" << endl;
			remove("XXX---FontSum");
			unsigned long Sum[FontNum] = {0};
			unsigned long temp = 0;
			for(int i=0; i<FontNum; i++)
			{
					temp += FontDef[i].size;
					Sum[i] =  temp;
					WriteSum2File("XXX---FontSum", Sum[i]);
			}
	}

//////////////////////////////////////////////////////////////////////////////////////
	if(1){
			cout << "UI Icon   ......" << endl;
			for (unsigned int i=0; i<64; i++) {//total icon numbers: 64
					cout << ". ";
					addIcon2DataFile(ICON_DATA_FILE, icon_set[i]);
			}
			cout << "." << endl;


			//cout << "i = "<<i<< endl;
/*
			cout << "Transfer from the file to array ......" << endl;
			char tempbuf[MAX_FILE_LEN] = {0};
			char* ptemp = tempbuf;
			int len = 0;
			len = ReadFile2Str(ICON_DATA_FILE, ptemp);
			//should escape the UTF-8 header: EF BB BF
			for(int i=0; i<len; i++)
			{
				WriteAscIICode2File("Icon_test.c", ptemp[i]);
			}
*/
	}

	if(0){
			cout << "Transfer from the file to array ......" << endl;
			//should change the file encoding to UTF8 format
			char tempbuf[MAX_FILE_LEN] = {0};
			char* ptemp = tempbuf;
			int len = 0;
			len = ReadFile2Str("icon.data", ptemp);
			//should escape the UTF-8 header: EF BB BF
			for(int i=0; i<len; i++)
			{
					WriteAscIICode2File("icon.data.array.h", ptemp[i]);
/*
					if((i+1)%16 == 0) {
						//cout << "i = "<<i << endl;
						WriteLine2File("DIN32.xbf.array.h");
					}
*/
			}
	}

	if(0){
			cout << "Cut some parts from the file  ......" << endl;
			remove("XXX---TempDataClip.c");
			int startAdd = 4096*(4056-4033);
			char buffer[4096*1]; //*4
			FILE *stream;
			stream = fopen("ExtIMG_beta.bin", "r" );
			//fprintf( stream, "%.*s", len, pStr);
			fseek(stream, startAdd, SEEK_SET);
			fread(buffer, sizeof(buffer), 1, stream);
			fclose( stream );

			stream = fopen("XXX---TempDataClip.c", "w" );
			fwrite(buffer, sizeof(buffer), 1, stream);
			fclose( stream );
	}

/////////////////////////////////////////////////////////////////////////////////////////////
	if(1) {
		cout << "Integrating all data(Font, String, Icon)  ......" << endl;
		for(int i=0; i<FontNum; i++) {
				IntegrateData2File(FontDef[i].filename, (FontDef[i].size)/4096+1);
		}

		for(int i=0; i<StrNum; i++) {
				IntegrateData2File(StringDef[i].filename, (StringDef[i].size)/4096+1);
		}

		IntegrateData2File(IconDef[0].filename, (IconDef[0].size)/4096+1);

	}

	if(1){
			cout << "Checksum  ......" << endl;
			unsigned int i,j,ImageChecksum=0;
			unsigned long SecNum = 11; //need changed
			char buffer[4096];
			FILE *stream;
			stream = fopen(DATA_INTEGRATED, "rw+" );
			for(i=0; i<SecNum; i++)
			{
					fseek(stream, 4096*i, SEEK_SET);
					fread(buffer, sizeof(buffer), 1, stream);
					for(j=0; j<4096; j++)
					{
							ImageChecksum += buffer[j];
					}
			}

			fseek(stream, 0, SEEK_END);
	        memset(buffer,0x0,1024);
	        sprintf(buffer, "MITACV1-0x%08X", ImageChecksum);
			cout << buffer<< endl;
	        fwrite(buffer, 1024, 1, stream);
			fclose( stream );
	}

	return 0;
}
