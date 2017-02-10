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
* Source file: item_clock02                                          *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsitem_clock02[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palitem_clock02 = {
  2,    /* number of entries */
  0,    /* No transparency */
  &Colorsitem_clock02[0]
};

static GUI_CONST_STORAGE unsigned char acitem_clock02[] = {
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
  ______XX, XXXXXXXX, XXX_____, ________, _______X, XXXXX___, ________, ________, ________, ________,
  _____XXX, XXXXXXXX, XXXXX___, ________, ______XX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXX___, ________, _____XXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXXX__, ________, ____XXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, ___XXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, __XXXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, __XXXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, _XXXXXX_, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, XXXXXX__, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, _______X, XXXXX___, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ______XX, XXXXX___, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ______XX, XXXX____, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, _____XXX, XXX_____, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ____XXXX, XX______, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ___XXXXX, XX_____X, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ___XXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ___XXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ___XXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________,
  ____XXXX, X_______, _XXXXX__, ________, _______X, XXXXX___, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXXX__, ________, ________, XXXXX___, ________, ________, ________, ________,
  ____XXXX, XXXXXXXX, XXXXXX__, ________, ________, XXXXX___, ________, ________, ________, ________,
  _____XXX, XXXXXXXX, XXXXX___, ________, ________, XXXXX___, ________, ________, ________, ________,
  ______XX, XXXXXXXX, XXX_____, ________, ________, XXXXX___, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XXX_____, XXXXXXXX, XXX_____,
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XXX_____, XXXXXXXX, XXX_____,
  ________, ________, ________, ________, ________, _______X, XX______, ________, ________, _XXX____,
  ________, ________, ________, ________, ________, _______X, XX______, ________, ________, _XXX____,
  ________, ________, ________, ________, ________, _______X, XX______, ________, ________, _XXX____,
  ________, ________, ________, ________, ________, _______X, XX______, ________, ________, _XXX____,
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XX______, _XXXXXXX, XXX_____,
  _____XXX, XX___XX_, ___XXX__, ________, ________, _______X, XXXXXXXX, XXX_____, _XXXXXXX, XXX_____,
  _____XX_, _XX__XXX, ___XXX__, ________, ________, ________, ________, _XX_____, ________, _XXX____,
  _____XX_, __X__XXX, __XXXX__, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  _____XX_, __X__XXX, X_X_XX__, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  _____XX_, _XX__XX_, X_X_XX__, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  _____XXX, XX___XX_, XXX_XX__, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  _____XX_, _____XX_, _X__XX__, ________, ________, ________, ________, _XX_____, ________, _XXX____,
  _____XX_, _____XX_, ____XX__, ________, ________, _______X, XXXXXXXX, XXX____X, XXXXXXXX, XXX_____,
  _____XX_, _____XX_, ____XX__, ________, ________, _______X, XXXXXXXX, XX_____X, XXXXXXXX, XX______,
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

GUI_CONST_STORAGE GUI_BITMAP bmitem_clock02 = {
  80, /* XSize */
  80, /* YSize */
  10, /* BytesPerLine */
  1, /* BitsPerPixel */
  acitem_clock02,  /* Pointer to picture data (indices) */
  &Palitem_clock02  /* Pointer to palette */
};

/* *** End of file *** */
