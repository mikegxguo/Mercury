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
* Source file: ico_start_right_key                                   *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_start_right_key[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_start_right_key = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsico_start_right_key[0]
};

static GUI_CONST_STORAGE unsigned char acico_start_right_key[] = {
  ________, ________,
  ________, ________,
  _____X__, ________,
  _____XX_, ________,
  _____XXX, ________,
  _____XXX, X_______,
  _____XXX, XX______,
  _____XXX, XXX_____,
  _____XXX, XXX_____,
  _____XXX, XX______,
  _____XXX, X_______,
  _____XXX, ________,
  _____XX_, ________,
  _____X__, ________,
  ________, ________,
  ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_start_right_key = {
  16, /* XSize */
  16, /* YSize */
  2, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_start_right_key,  /* Pointer to picture data (indices) */
  &Palico_start_right_key  /* Pointer to palette */
};

/* *** End of file *** */