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
* Source file: ico_lv1                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_lv1[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_lv1 = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsico_lv1[0]
};

static GUI_CONST_STORAGE unsigned char acico_lv1[] = {
  ________, ________, ________, ________,
  ________, ________, ________, ________,
  ________, ________, ________, ________,
  ________, ______XX, XXX_____, ________,
  ________, ____XXXX, XXXXXX__, ________,
  ________, __XXX___, _____XX_, ________,
  ________, _XX_____, ______XX, ________,
  ________, XX______, _______X, X_______,
  ________, X_______, _X______, XX______,
  _______X, X_______, XX______, XX______,
  _______X, _______X, XX______, _X______,
  ______XX, ______XX, XX______, _XX_____,
  ______XX, ________, XX______, _XX_____,
  ______XX, ________, XX______, _XX_____,
  ______XX, ________, XX______, _XX_____,
  ______XX, ________, XX______, _XX_____,
  _______X, ________, XX______, _X______,
  _______X, X_______, XX______, XX______,
  ________, XX______, ________, XX______,
  ________, XX______, _______X, X_______,
  ________, _XX_____, ______XX, ________,
  ________, __XXX___, ____XXX_, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, XXXXXX__, ________,
  ________, ___XXXXX, _XXXXX__, ________,
  ________, ___XXXX_, __XXXX__, ________,
  ________, ___XX___, ____XX__, ________,
  ________, ________, ________, ________,
  ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_lv1 = {
  32, /* XSize */
  32, /* YSize */
  4, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_lv1,  /* Pointer to picture data (indices) */
  &Palico_lv1  /* Pointer to palette */
};

/* *** End of file *** */
