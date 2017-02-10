/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        �C/GUI-BitmapConvert-Demo V5.08.                            *
*        Compiled Jan 13 2011, 12:35:33                              *
*        (c) 2002-2010  Micrium, Inc.                                *
*        www.micrium.com                                             *
*                                                                    *
*        (c) 1998-2010  Segger Microcontroller GmbH & Co. KG *                                                                    *
*        May not be used in a product                                *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: item_clock03                                          *
* Dimensions:  80 * 80                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsitem_clock03[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palitem_clock03 = {
  2,    /* number of entries */
  0,    /* No transparency */
  &Colorsitem_clock03[0]
};

static GUI_CONST_STORAGE unsigned char acitem_clock03[] = {
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  __XX_XX_, ________, _XXXX_XX, XX_XXXX_, XXXX____, ________, ________, ________, ________, ________,
  __XX_XX_, XXX_XXX_, _X__X_X_, _X____X_, ___X____, ________, ________, ________, ________, ________,
  __X_X_X_, X_X_X__X, _X__X_XX, XX_XXXX_, XXXX____, ________, ________, ________, ________, ________,
  __X_X_X_, X_X_X__X, _X__X_X_, _X_X____, X_______, ________, ________, ________, ________, ________,
  __X___X_, XXX_X__X, _XXXX_XX, XX_XXXX_, XXXX____, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, X_______, ___XXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXX____, ___XXXXX, XXXXXXXX, XXX_____, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXX___, ___XXXXX, XXXXXXXX, XXXX____, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXX___, ___XXXXX, XXXXXXXX, XXXX____, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXXX__, ___XXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________,
  ________, ________, XXXXXX__, ________, _______X, XXXXX___, ________, ________, ________, ________,
  ________, ________, XXXXXX__, ________, _______X, XXXXX___, ________, ________, ________, ________,
  ________, ________, XXXXXX__, ________, _______X, XXXXX___, ________, ________, ________, ________,
  ________, ________, XXXXXX__, ________, _______X, XXXXX___, __XXXXXX, XXXXXX__, ___XXXXX, XXXXXX__,
  _______X, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXX___, __XXXXXX, XXXXXX__, ___XXXXX, XXXXXX__,
  ____XXXX, XXXXXXXX, XXXXXX__, ___XXXXX, XXXXXXXX, XXXXX___, __XXX___, ________, ________, ____XXX_,
  ___XXXXX, XXXXXXXX, XXXXX___, __XXXXXX, XXXXXXXX, XXXX____, __XXX___, ________, ________, ____XXX_,
  ___XXXXX, XXXXXXXX, XXXX____, __XXXXXX, XXXXXXXX, XXX_____, __XXX___, ________, ________, ____XXX_,
  ___XXXXX, XXXXXXXX, XX______, __XXXXXX, XXXXXXXX, X_______, __XXX___, ________, ________, ____XX__,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, __XXXXXX, XXXXX___, ____XXXX, XXXXXX__,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, __XXXXXX, XXXXXX__, ____XXXX, XXXXXX__,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, ________, ________, _XXXXXX_, ________, ________, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXX___, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXX___, ________, ____XXX_, ________, ____XXX_,
  __XXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXX___, __XXXXXX, XXXXXX__, __XXXXXX, XXXXXX__,
  __XXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXX___, __XXXXXX, XXXXX___, __XXXXXX, XXXXX___,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmitem_clock03 = {
  80, /* XSize */
  80, /* YSize */
  10, /* BytesPerLine */
  1, /* BitsPerPixel */
  acitem_clock03,  /* Pointer to picture data (indices) */
  &Palitem_clock03  /* Pointer to palette */
};

/* *** End of file *** */
