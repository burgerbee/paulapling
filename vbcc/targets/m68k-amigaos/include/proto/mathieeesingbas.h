#ifndef _PROTO_MATHIEEESINGBAS_H
#define _PROTO_MATHIEEESINGBAS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_MATHIEEESINGBAS_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/mathieeesingbas_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct MathIEEEBase *MathIeeeSingBasBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/mathieeesingbas.h>
#else
#include <inline/mathieeesingbas.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/mathieeesingbas_protos.h>
#endif
#else
#include <pragma/mathieeesingbas_lib.h>
#endif

#endif	/*  _PROTO_MATHIEEESINGBAS_H  */
