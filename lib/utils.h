/*
    utils.h -- header file for utils.c
    Copyright (C) 1999 Ivo Timmermans <zarq@iname.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __TINC_UTILS_H__
#define __TINC_UTILS_H__

#include <ctype.h>

enum {
  DEBUG_CONNECTIONS = 0,
  DEBUG_PROTOCOL,
  DEBUG_STATUS,
  DEBUG_error,
  DEBUG_META
};

#define min(a,b) (((a)<(b))?(a):(b))

#define cp { cp_line = __LINE__; cp_file = __FILE__; }

extern volatile int cp_line;
extern volatile char *cp_file;

extern void hex2bin(char *src, char *dst, size_t length);
extern void bin2hex(char *src, char *dst, size_t length);

#endif /* __TINC_UTILS_H__ */
