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
* Source file: ico_footer_down_arrow                                 *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_footer_down_arrow[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_footer_down_arrow = {
  2,        /* number of entries */
  0,         /* No transparency */
  &Colorsico_footer_down_arrow[0]
};

static GUI_CONST_STORAGE unsigned char acico_footer_down_arrow[] = {
  ________, ________,
  ________, ________,
  ________, ________,
  ________, ________,
  ________, ________,
  __XXXXXX, XXXXXX__,
  ___XXXXX, XXXXX___,
  ____XXXX, XXXX____,
  _____XXX, XXX_____,
  ______XX, XX______,
  _______X, X_______,
  ________, ________,
  ________, ________,
  ________, ________,
  ________, ________,
  ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_footer_down_arrow = {
  16, /* XSize */
  16, /* YSize */
  2, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_footer_down_arrow,  /* Pointer to picture data (indices) */
  &Palico_footer_down_arrow  /* Pointer to palette */
};

/* *** End of file *** */