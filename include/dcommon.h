/*
 * Copyright 2012 Nikolay Sivov for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_DCOMMON_H
#define __WINE_DCOMMON_H

#include "dxgiformat.h"

typedef enum DWRITE_MEASURING_MODE
{
    DWRITE_MEASURING_MODE_NATURAL,
    DWRITE_MEASURING_MODE_GDI_CLASSIC,
    DWRITE_MEASURING_MODE_GDI_NATURAL
} DWRITE_MEASURING_MODE;

typedef enum D2D1_ALPHA_MODE
{
    D2D1_ALPHA_MODE_UNKNOWN = 0,
    D2D1_ALPHA_MODE_PREMULTIPLIED = 1,
    D2D1_ALPHA_MODE_STRAIGHT = 2,
    D2D1_ALPHA_MODE_IGNORE = 3,
    D2D1_ALPHA_MODE_FORCE_DWORD = 0xffffffff,
} D2D1_ALPHA_MODE;

typedef struct D2D1_PIXEL_FORMAT
{
    DXGI_FORMAT format;
    D2D1_ALPHA_MODE alphaMode;
} D2D1_PIXEL_FORMAT;

typedef struct D2D_POINT_2F
{
    FLOAT x;
    FLOAT y;
} D2D_POINT_2F, D2D1_POINT_2F;

typedef POINT D2D_POINT_2L, D2D1_POINT_2L;

typedef struct D2D_SIZE_U
{
    UINT32 width;
    UINT32 height;
} D2D_SIZE_U, D2D1_SIZE_U;

#endif /* __WINE_DCOMMON_H */
