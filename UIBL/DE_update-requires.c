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
* Source file: DE_updaterequires                                     *
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

static GUI_CONST_STORAGE GUI_COLOR ColorsDE_updaterequires[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalDE_updaterequires = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsDE_updaterequires[0]
};

static GUI_CONST_STORAGE unsigned char acDE_updaterequires[] = {
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
  ________, ________, ________, ___X____, ________, ________, ________, X___X___, _______X, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, _____X__, ___X____, ___X____, ________, ________, X_______, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ____XXX_, ___X____, ___X____, ________, ________, X_______, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ____X_X_, ___X___X, __XXXX__, X____X__, _XXXX___, X___X___, XXXX___X, ____XXX_, __X_XX__, X____X__, X_XXX___, __XXXX__, ________, ________,
  ________, ________, ___X__X_, ___X__X_, ___X____, X____X__, ____X___, X___X___, X__X___X, ___X___X, __XX____, X____X__, XX__X___, _X___X__, ________, ________,
  ________, ________, ___X___X, ___X_X__, ___X____, X____X__, _____X__, X___X__X, X______X, __X____X, __X_____, X____X__, X___X___, X____X__, ________, ________,
  ________, ________, ___X___X, ___XXX__, ___X____, X____X__, __XXXX__, X___X___, XXXX___X, __XXXXXX, __X_____, X____X__, X___X___, X____X__, ________, ________,
  ________, ________, __XXXXXX, ___X_XX_, ___X____, X____X__, XX___X__, X___X___, ___X___X, __X_____, __X_____, X____X__, X___X___, X____X__, ________, ________,
  ________, ________, __X_____, X__X__XX, ___X____, X___XX__, X___XX__, X___X__X, ___X___X, ___X___X, __X_____, X___XX__, X___X___, _X__XX__, ________, ________,
  ________, ________, __X_____, X__X___X, ____XX__, _XXX_X__, _XXXXX__, X___X___, XXXX___X, ____XXX_, __X_____, _XXX_X__, X___X___, __XX_X__, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, _____X__, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, _XXXX___, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ______XX, X_______, ________, ____X___, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ______X_, ________, ________, ____X___, ________, _____X__, _______X, XXXXX___, _XXXXX__, ______XX, X___X___, ________, ________,
  ________, ________, ________, _____X__, ________, ________, ____X___, ________, _____X__, _______X, X_______, XX___XX_, _____X__, X___X___, ________, ________,
  ________, ________, _XXX____, X_XX_XXX, ___XXXX_, __X_XX__, _XXXX___, _XXX____, X_XX_XXX, X______X, ________, X____XX_, _____X__, X__X____, ________, ________,
  ________, ________, X___X___, XX___X__, __XX__X_, __XX____, X___X___, X___X___, XX___X__, _______X, X_______, X____XX_, _____X__, X__X____, ________, ________,
  ________, ________, X____X__, X____X__, __X____X, __X_____, X___X___, X_______, X____X__, _______X, XXXXXX__, X____XX_, ______XX, X_X__XXX, ________, ________,
  ________, ________, XXXXXX__, X____X__, __X____X, __X_____, X___X___, XXXXXX__, X____X__, ________, ____XX__, X____XX_, ________, __X_X__X, ________, ________,
  ________, ________, X_______, X____X__, __X____X, __X_____, X___X___, X_______, X____X__, ________, ____XX__, X____XX_, ________, _X__X__X, ________, ________,
  ________, ________, X_______, X____X__, __XX__X_, __X_____, X___X___, X_______, X_____X_, ________, ____XX__, XX___XX_, ________, _X__X__X, ________, ________,
  ________, ________, _XXXX___, X____X__, ___XXXX_, __X_____, _XXXX___, _XXXX___, X_____XX, X______X, XXXXX___, _XXXXX__, ________, X____XXX, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, __X_____, __X_____, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ___XX___, __X_____, __X_____, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ___XX___, __X_____, __X_____, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ___X_X__, __X___X_, __X__XX_, _X____X_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, __X__X__, __X__X__, __X__X__, _X____X_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, __X__X__, __X_X___, __X_X___, _X____X_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, __X___X_, __XXX___, __XX____, _X____X_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, _XXXXXX_, __X_X___, __X_X___, _X____X_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, _X____X_, __X__X__, __X__X__, __X__XX_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, _X_____X, __X___X_, __X___X_, __XXX_X_, ________, ________, ________, ________, ________, ________,
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
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmDE_updaterequires = {
  128, /* XSize */
  128, /* YSize */
  16, /* BytesPerLine */
  1, /* BitsPerPixel */
  acDE_updaterequires,  /* Pointer to picture data (indices) */
  &PalDE_updaterequires  /* Pointer to palette */
};

/* *** End of file *** */
