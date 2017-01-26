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
* Source file: ic_pace                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsic_pace[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palic_pace = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsic_pace[0]
};

static GUI_CONST_STORAGE unsigned char acic_pace[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXX__, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXX__, __XXXXXX, __XXXXXX, XXXXXXXX,
  XXXXXX__, ___XXXX_, ___XXXXX, XXXXXXXX,
  XXXX__X_, ________, ____XXXX, XXXXXXXX,
  XXXX___X, ________, ____XXXX, XXXXXXXX,
  XXX_____, X_______, XX__XXXX, XXXXXXXX,
  XXX_X___, _X______, _XX__XXX, XXXXXXXX,
  XXX__X__, __X_____, __X___XX, XXXXXXXX,
  XXXX__X_, ___XX___, ___X__XX, XXXXXXXX,
  XXXXX___, _____X__, ____X__X, XXXXXXXX,
  XXXXXXXX, ________, ________, _XXXXXXX,
  XXXXXXXX, XXXXX___, ________, ___XXXXX,
  XXXXXXXX, XXXXXX__, XX______, _____XXX,
  XXXXXXXX, XXXXXXX_, __X_____, _____XXX,
  XXXXXXXX, XXXXXXXX, X__XX___, _____XXX,
  XXXX____, ________, ________, ____XXXX,
  XXXX____, ________, ________, _____XXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmic_pace = {
  32, /* XSize */
  32, /* YSize */
  4, /* BytesPerLine */
  1, /* BitsPerPixel */
  acic_pace,  /* Pointer to picture data (indices) */
  &Palic_pace  /* Pointer to palette */
};

/* *** End of file *** */