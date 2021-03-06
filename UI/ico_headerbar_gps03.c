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
* Source file: ico_headerbar_gps03                                   *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsico_headerbar_gps03[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palico_headerbar_gps03 = {
  2,   /* number of entries */
  0,    /* No transparency */
  &Colorsico_headerbar_gps03[0]
};

static GUI_CONST_STORAGE unsigned char acico_headerbar_gps03[] = {
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX,
  XXXXXX_X, XXXXXXXX,
  XXXXX_X_, XXXXXXXX,
  XXXX___X, XXXXXXXX,
  XXX____X, XXXXX__X,
  XX____X_, X_XXX__X,
  XX___XX_, X_XXX__X,
  X_X_XX_X, _XXXX__X,
  XX_X__XX, _X__X__X,
  XXXXXX__, XX__X__X,
  XXXXX_XX, XX__X__X,
  XXXXXXX_, _X__X__X,
  XXXXXXX_, _X__X__X,
  XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmico_headerbar_gps03 = {
  16, /* XSize */
  16, /* YSize */
  2, /* BytesPerLine */
  1, /* BitsPerPixel */
  acico_headerbar_gps03,  /* Pointer to picture data (indices) */
  &Palico_headerbar_gps03  /* Pointer to palette */
};

/* *** End of file *** */
