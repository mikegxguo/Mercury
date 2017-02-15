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
* Source file: item_clock05                                          *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsitem_clock05[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palitem_clock05 = {
  2,    /* number of entries */
  0,    /* No transparency */
  &Colorsitem_clock05[0]
};

static GUI_CONST_STORAGE unsigned char acitem_clock05[] = {
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
  _______X, XXXXXXX_, ________, _XXXXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  _______X, XXXXXXX_, ________, XXXXXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  _______X, XXXXXXX_, ________, XXXXXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXXX____, ________, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, ________, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, ________, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, ________, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, ________, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXXXXXXX, XXXXXX__, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXXXXXXX, XXXXXXX_, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXXXXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, ____XXXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, _______X, XXX_____, _____XXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, ________, XXXXXXXX, XXXXXXXX, X_______, ________, ________, ________, ________,
  ________, ___XXXX_, ________, XXXXXXXX, XXXXXXXX, ________, ________, ________, ________, ________,
  ________, ___XXXX_, ________, _XXXXXXX, XXXXXXX_, ________, ________, ________, ________, ________,
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
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XXX_____, _XXXXXXX, XXX_____,
  ________, ________, ________, ________, ________, ________, ________, _XX_____, ________, _XXX____,
  ________, ________, ________, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  ________, ________, ________, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  ________, ________, ________, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  ________, ________, ________, ________, ________, ________, ________, _XXX____, ________, _XXX____,
  ________, ________, ________, ________, ________, ________, ________, _XX_____, ________, _XXX____,
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XXX____X, XXXXXXXX, XXX_____,
  ________, ________, ________, ________, ________, _______X, XXXXXXXX, XX_____X, XXXXXXXX, XX______,
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

GUI_CONST_STORAGE GUI_BITMAP bmitem_clock05 = {
  80, /* XSize */
  80, /* YSize */
  10, /* BytesPerLine */
  1, /* BitsPerPixel */
  acitem_clock05,  /* Pointer to picture data (indices) */
  &Palitem_clock05  /* Pointer to palette */
};

/* *** End of file *** */