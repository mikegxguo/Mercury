/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        �C/GUI-BitmapConvert V5.08.                                 *
*        Compiled Jan 13 2011, 12:35:22                              *
*        (c) 2002-2010  Micrium, Inc.                                *
*        www.micrium.com                                             *
*                                                                    *
*        (c) 1998-2010  Segger Microcontroller GmbH & Co. KG *                                                                    *
**********************************************************************
*                                                                    *
* Source file: ico_status_heart                                      *
* Dimensions:  16 * 16                                               *
* NumColors:   2                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR Colorsico_status_heart[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_status_heart = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsico_status_heart[0]
};

static GUI_CONST_STORAGE unsigned char acico_status_heart[] = {
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX,
  XXXX__XX, XX__XXXX,
  XXX____X, X____XXX,
  XX______, ______XX,
  XX______, ______XX,
  XX______, ______XX,
  XXX_____, _____XXX,
  XXXX____, ____XXXX,
  XXXXX___, ___XXXXX,
  XXXXXX__, __XXXXXX,
  XXXXXXX_, _XXXXXXX,
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmico_status_heart = {
  16, /* XSize */
  16, /* YSize */
  2, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_status_heart,  /* Pointer to picture data (indices) */
  &Palico_status_heart  /* Pointer to palette */
};

/* *** End of file *** */
