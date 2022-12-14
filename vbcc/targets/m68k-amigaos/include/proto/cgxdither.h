#ifndef _PROTO_CGXDITHER_H
#define _PROTO_CGXDITHER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_CGXDITHER_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/cgxdither_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *CGXDitherBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/cgxdither.h>
#else
#include <inline/cgxdither.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/cgxdither_protos.h>
#endif
#else
#include <pragma/cgxdither_lib.h>
#endif

#endif	/*  _PROTO_CGXDITHER_H  */
