#ifndef _PROTO_GETSCREENMODE_H
#define _PROTO_GETSCREENMODE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_GETSCREENMODE_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/getscreenmode_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *GetScreenModeBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/getscreenmode.h>
#else
#include <inline/getscreenmode.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/getscreenmode_protos.h>
#endif
#else
#include <pragma/getscreenmode_lib.h>
#endif

#endif	/*  _PROTO_GETSCREENMODE_H  */
