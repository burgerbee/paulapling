#ifndef _PROTO_AMIGAGUIDE_H
#define _PROTO_AMIGAGUIDE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_AMIGAGUIDE_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/amigaguide_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *AmigaGuideBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/amigaguide.h>
#else
#include <inline/amigaguide.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/amigaguide_protos.h>
#endif
#else
#include <pragma/amigaguide_lib.h>
#endif

#endif	/*  _PROTO_AMIGAGUIDE_H  */
