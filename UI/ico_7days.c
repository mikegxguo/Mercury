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
* Source file: ico_7days                                             *
* Dimensions:  64 * 64                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_7days[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_7days = {
  2,    /* number of entries */
  0,     /* No transparency */
  &Colorsico_7days[0]
};

static GUI_CONST_STORAGE unsigned char acico_7days[] = {
  ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________,
  _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX______,
  _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____,
  ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___,
  ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXX____, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXX____, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXX____, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, X___XXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, X__XXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, ___XXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, ___XXXXX, X_____XX, X_____XX, _XXXX_XX, X____XXX, XXXXXX__,
  ___XXXXX, XXXXXXX_, __XXXXXX, __XX__XX, X_XX__XX, __XX__XX, __XX__XX, XXXXXX__,
  ___XXXXX, XXXXXXX_, __XXXXXX, __XX__XX, XXXX__XX, __XX__XX, X__XXXXX, XXXXXX__,
  ___XXXXX, XXXXXXX_, __XXXXXX, _XXXX_XX, X_____XX, X__X_XXX, XX___XXX, XXXXXX__,
  ___XXXXX, XXXXXXX_, _XXXXXXX, __XX__XX, __XXX_XX, X____XXX, _XXX__XX, XXXXXX__,
  ___XXXXX, XXXXXX__, _XXXXXXX, __XX__XX, ___X__XX, XXX__XXX, __XX__XX, XXXXXX__,
  ___XXXXX, XXXXXX__, _XXXXXXX, X____XXX, X___X__X, XXX_XXXX, X____XXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXX__,
  ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXX__,
  ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___,
  _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___,
  ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____,
  ________, _______X, XXX_____, ________, ________, ________, ________, ________,
  ________, ________, XXX_____, ________, ________, ________, ________, ________,
  ________, ________, XXXX____, ________, ________, XXX_____, ________, ________,
  ________, ________, _XXX____, ________, _______X, XXXX____, ________, ________,
  ________, ________, __XX____, ________, _______X, X_XXX___, ________, ________,
  ________, ________, ___XX___, ________, ______XX, X_XXX___, ________, ________,
  ________, ________, ____X___, ________, ______XX, X__XXX__, ________, ________,
  ________, ________, ________, ________, ______XX, X___XXX_, ________, ________,
  ________, ________, ________, ________, _______X, X___XXX_, ________, ________,
  ________, ________, ________, ________, _______X, XX___XXX, ________, ________,
  ________, ________, ________, ________, ________, XXX___XX, X_______, ________,
  ________, ________, ________, ________, ________, _XXX___X, XX______, ________,
  ________, ________, ________, ________, _XXXXXXX, XXXX____, XXXXXXXX, XXXXX___,
  ________, ________, ________, ________, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXX___,
  ________, ________, ________, _______X, XX______, ________, _XXXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, ________, XXX_____, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, ________, XXX_____, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, __XXX___, ___XX___,
  ________, ________, ________, ________, XXX_____, ________, __XXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, _XXXX___, ___XX___,
  ________, ________, ________, _______X, XX______, ________, XXXXXXXX, XXXXX___,
  ________, ________, ________, ________, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXX___,
  ________, ________, ________, ________, _XXXXXXX, XXXXXXXX, X_______, ________,
  ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_7days = {
  64, /* XSize */
  64, /* YSize */
  8, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_7days,  /* Pointer to picture data (indices) */
  &Palico_7days  /* Pointer to palette */
};

/* *** End of file *** */
