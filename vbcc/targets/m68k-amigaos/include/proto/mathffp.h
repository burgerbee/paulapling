#ifndef _PROTO_MATHFFP_H
#define _PROTO_MATHFFP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_MATHFFP_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/mathffp_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *MathBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/mathffp.h>
#else
#include <inline/mathffp.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/mathffp_protos.h>
#endif
#else
#include <pragma/mathffp_lib.h>
#endif

#endif	/*  _PROTO_MATHFFP_H  */
