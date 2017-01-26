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
* Source file: ico_pop_play                                          *
* Dimensions:  65 * 65                                               *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_pop_play[] = {
     0x000000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_pop_play = {
  2,        /* number of entries */
  0,         /* No transparency */
  &Colorsico_pop_play[0]
};

static GUI_CONST_STORAGE unsigned char acico_pop_play[] = {
  ________, ________, ________, ________, ________, ________, ________, ________, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, ___XXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _____XXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _______X, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, ________, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _______X, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _____XXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, ___XXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmico_pop_play = {
  65, /* XSize */
  65, /* YSize */
  9, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_pop_play,  /* Pointer to picture data (indices) */
  &Palico_pop_play  /* Pointer to palette */
};

/* *** End of file *** */
