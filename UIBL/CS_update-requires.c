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
* Source file: CS_updaterequires                                     *
* Dimensions:  128 * 128                                             *
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

static GUI_CONST_STORAGE GUI_COLOR ColorsCS_updaterequires[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalCS_updaterequires = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsCS_updaterequires[0]
};

static GUI_CONST_STORAGE unsigned char acCS_updaterequires[] = {
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, _____X__, ________, ________, ________, __X___X_, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ______XX, _____X__, ____X___, ________, ________, __X_____, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ______XX, _____X__, ____X___, ________, ________, __X_____, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, _____X_X, X____X__, _X__XXXX, __X____X, __XXXX__, __X___X_, _XXXXX__, _XXXX___, _XXX____, XXX_____, ________, ________, ________,
  ________, ________, ________, _____X__, X____X__, X___X___, __X____X, ______X_, __X___X_, ____XX__, ____X___, X___X__X, ___X____, ________, ________, ________,
  ________, ________, ________, _____X__, X____X_X, ____X___, __X____X, ______X_, __X___X_, ____X___, _____X__, X______X, ________, ________, ________, ________,
  ________, ________, ________, ____X___, XX___XXX, ____X___, __X____X, ___XXXX_, __X___X_, ___X____, __XXXX__, X______X, XXXXX___, ________, ________, ________,
  ________, ________, ________, ____XXXX, XX___X_X, ____X___, __X____X, __X___X_, __X___X_, __XX____, XX___X__, X______X, ________, ________, ________, ________,
  ________, ________, ________, ____X___, _X___X__, X____X__, __X___XX, __X___X_, __X___X_, _XX_____, X___XX__, X___X__X, ________, ________, ________, ________,
  ________, ________, ________, ___X____, _XX__X__, _X___XXX, ___XXX_X, __XXXXX_, __X___X_, _XXXXX__, _XXXXX__, _XXX____, XXXX____, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, X_X_____, ________, __X_____, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, XX______, ________, __X_____, ________, X_______, _______X, XXXXX___, _XXXXX__, ______XX, X___X___, ________, ________,
  ________, ________, ________, ________, ________, ________, __X_____, ________, ________, _______X, X_______, XX___XX_, _____X__, X___X___, ________, ________,
  ________, ________, X____X_X, ____X_XX, XXXX___X, XXX____X, XXX__X__, __X__XX_, ____XXX_, _______X, ________, XX____X_, _____X__, X__X____, ________, ________,
  ________, ________, X___X___, X___X___, __X_____, __X___XX, __X__X__, __X____X, ___X___X, _______X, X_______, XX____X_, _____X__, X__X____, ________, ________,
  ________, ________, X___X___, X__X____, _XX_____, ___X__X_, __X__X__, __X____X, ___X____, X______X, XXXXXX__, XX____X_, ______XX, X_X__XXX, ________, ________,
  ________, ________, _X_X____, _X_X____, XX______, XXXX__X_, __X__X__, __X____X, ___XXXXX, X_______, ____XX__, XX____X_, ________, __X_X__X, ________, ________,
  ________, ________, _X_X____, _XXX____, X_____XX, ___X__X_, __X__X__, __X____X, ___X____, ________, ____XX__, XX____X_, ________, _X__X__X, ________, ________,
  ________, ________, __XX____, _XX____X, ______X_, __XX__X_, __X__X__, _XX____X, ___X____, ________, ____XX__, XX___XX_, ________, _X__X__X, ________, ________,
  ________, ________, __X_____, __X___XX, XXXX___X, XXXX___X, XXX___XX, X_X____X, ____XXXX, _______X, XXXXX___, _XXXXX__, ________, X____XXX, ________, ________,
  ________, ________, ________, _X______, ________, ________, ________, _______X, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, _X______, ________, ________, ________, ______XX, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ____XXX_, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, _______X, ________, ________, ________, ________, ______X_, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, _______X, ________, ________, ________, ________, ________, _X______, ________, ___X____, ________, __X_____, ________, ________, ________,
  ________, ________, _______X, ________, ________, ________, ________, ________, _X______, ________, ___X____, ________, __X_____, ________, ________, ________,
  ________, ________, _______X, ___XX__X, XXXX___X, XXXX___X, XXX_____, XXX___X_, _XXXX_X_, ___X____, ___XXXX_, ___XXXX_, __XXXX__, ________, ________, ________,
  ________, ________, _______X, __X_____, ___X___X, ___X____, ___X___X, ___X__X_, _X_____X, ___X____, ___X___X, ______XX, __X_____, ________, ________, ________,
  ________, ________, _______X, _XX_____, ___X___X, ____X___, ___X__X_, ______X_, _X_____X, __X_____, ___X___X, _______X, __X_____, ________, ________, ________,
  ________, ________, _______X, XX______, XXXX___X, ____X___, XXXX__X_, ______X_, _X_____X, __X_____, ___X___X, ____XXXX, __X_____, ________, ________, ________,
  ________, ________, _______X, X_X____X, ___X___X, ____X__X, ___X__X_, ______X_, _X______, XX______, ___X___X, ___X___X, __X_____, ________, ________, ________,
  ________, ________, _______X, ___X___X, ___X___X, ___X___X, ___X___X, ___X__X_, __X_____, XX______, ___X___X, __XX__XX, ___X____, X_______, ________, ________,
  ________, ________, _______X, ___XX___, XXXX___X, XXX____X, XXXX____, XXX___X_, __XXX___, X_______, ___XXXX_, ___XXXXX, ___XXX__, X_______, ________, ________,
  ________, ________, ________, ________, _______X, ________, ________, ________, ________, X_______, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, _______X, ________, ________, ________, ________, X_______, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmCS_updaterequires = {
  128, /* XSize */
  128, /* YSize */
  16, /* BytesPerLine */
  1, /* BitsPerPixel */
  acCS_updaterequires,  /* Pointer to picture data (indices) */
  &PalCS_updaterequires  /* Pointer to palette */
};

/* *** End of file *** */