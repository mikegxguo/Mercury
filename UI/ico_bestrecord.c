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
* Source file: ico_bestrecord                                        *
* Dimensions:  32 * 32                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_bestrecord[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_bestrecord = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsico_bestrecord[0]
};

static GUI_CONST_STORAGE unsigned char acico_bestrecord[] = {
  ________, ________, ________, ________,
  ________, ________, ________, ________,
  ________, ________, ________, ________,
  ________, ______XX, XXX_____, ________,
  ________, ____XXXX, XXXXX___, ________,
  ________, __XXX___, ____XXX_, ________,
  ________, _XX_____, ______XX, ________,
  ________, XX______, _______X, X_______,
  ________, X_______, X_______, X_______,
  _______X, X______X, XX______, XX______,
  _______X, ______XX, XXX_____, _X______,
  _______X, __XXXXXX, XXXXXXX_, _X______,
  ______XX, ___XXXXX, XXXXXX__, _XX_____,
  ______XX, ____XXXX, XXXXX___, _XX_____,
  ______XX, _____XXX, XXXX____, _XX_____,
  ______XX, ____XXXX, XXXXX___, _XX_____,
  _______X, ___XXXX_, __XXXX__, _X______,
  _______X, X_XXXX__, ___XXXX_, XX______,
  ________, X_______, ________, X_______,
  ________, XX______, _______X, X_______,
  ________, _XX_____, ______XX, ________,
  ________, __XXX___, ____XXX_, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, __XXXX__, ________,
  ________, ___XXX__, ___XXX__, ________,
  ________, ___XX___, ____XX__, ________,
  ________, ________, ________, ________,
  ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_bestrecord = {
  32, /* XSize */
  32, /* YSize */
  4, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_bestrecord,  /* Pointer to picture data (indices) */
  &Palico_bestrecord  /* Pointer to palette */
};

/* *** End of file *** */
