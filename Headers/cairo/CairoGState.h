/*
   Copyright (C) 2004 Free Software Foundation, Inc.

   Author:  Banlu Kemiyatorn <object at gmail dot com>

   This file is part of GNUstep.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef CairoGState_h
#define CairoGState_h

#include <cairo.h>
#include "gsc/GSGState.h"


@class CairoSurface;

@interface CairoGState : GSGState
{
  @public
    cairo_t *_ct;
    CairoSurface *_surface;
}

- (void) GSCurrentDevice: (void **)device: (int *)x : (int *)y;
- (void) GSSetDevice: (void *)device : (int)x : (int)y;
- (void) DPSgsave;
- (void) DPSgrestore;

@end

#endif

