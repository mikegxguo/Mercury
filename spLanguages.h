#ifndef _SPLANGUAGE_H_
#define _SPLANGUAGE_H_

#if 0
/*
CS 		Czech 		Čeština 	 
DA 		Danish 		Dansk 	 
DE 		German 		Deutsch 	
EL 		Greek 		Ελληνικά

EN 		English 	English 	
ES 		Spanish 	Español 	
FR 		French 		Français 	
HR 		Croatian 	Hrvatski 	 
IT 		Italian 	Italiano 	
LV 		Latvian 	Latviešu

HU 		Hungarian 	Magyar 	 
NL 		Dutch 		Nederlands 	
NO 		Norwegian 	Norsk 	 
PL 		Polish 		Polski 	 
PT 		Portuguese 	Português 	 
RU 		Russian 	Русский 	 
SL 		Slovenian 	Slovenščina 	 
FI 		Finnish 	Suomi 	 
SV 		Swedish 	Svenska 	 
TR 		Turkish 	Türkçe

JA 		Japanese 	日本�?
*/
#endif

/*
   Language ID
*/
/*#define  LID_EN      0
#define  LID_ES      1
#define  LID_DE      2
#define  LID_FR      3
#define  LID_IT      4
#define  LID_NL      5     ///Dutch
#define	 LID_CA		 6
#define  LID_00      99    ///fake, use for query



	predefined string
*/
typedef struct tStringSdef
{
	const unsigned short				uStrID;				/// id of the string
	const char*  				sStringdef;			/// string
}STRINGSDEF;


/*
	language list
*/
typedef struct tLanguageList
{
	const unsigned short				uLangID;			/// id of the language
	STRINGSDEF**				xStringTable;		/// table index
}LANGUAGELIST;

/* get string with specified string ID */
char* spIDgetString( unsigned short stringID );
/* get string with specified string ID and lanuage ID */
char* spIDgetStringLang( unsigned short stringID, unsigned short langID );
/* set new languge wit ID and return currnt language ID. input LID_00 for query. */
unsigned short spSetLanguage( unsigned short langID );
/*	inital language settingith stored record */
unsigned short spInitLanguageSet( void );


#endif		///_SPLANGUAGE_H_