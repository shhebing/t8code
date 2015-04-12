/*
  This file is part of t8code.
  t8code is a C library to manage a collection (a forest) of multiple
  connected adaptive space-trees of general element classes in parallel.

  Copyright (C) 2010 The University of Texas System
  Written by Carsten Burstedde, Lucas C. Wilcox, and Tobin Isaac

  t8code is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  t8code is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with t8code; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#ifndef T8_DTRI_H
#define T8_DTRI_H

/** \file t8_dtri.h
 * TODO: document this.
 */

#include <t8.h>

T8_EXTERN_C_BEGIN ();

/** The number of children that a triangle is refined into. */
#define T8_DTRI_CHILDREN 4

/** The number of faces of a triangle. */
#define T8_DTRI_FACES 3

/** The maximum refinement level allowed for a triangle. */
#define T8_DTRI_MAXLEVEL 30

/** The length of the root triangle in integer coordinates. */
#define T8_DTRI_ROOT_LEN (1 << (T8_DTRI_MAXLEVEL))

/** The length of a triangle at a given level in integer coordinates. */
#define T8_DTRI_LEN(l) (1 << (T8_DTRI_MAXLEVEL - (l)))

typedef int8_t      t8_dtri_type_t;
typedef int32_t     t8_dtri_coord_t;

typedef struct t8_dtri
{
  int8_t              level;
  t8_dtri_type_t type;
  t8_dtri_coord_t x, y;
  t8_dtri_coord_t n;
}
t8_dtri_t;

T8_EXTERN_C_END ();

#endif /* T8_DTRI_H */
