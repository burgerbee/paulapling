#ifndef _PROTO_EXEC_H
#define _PROTO_EXEC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_EXEC_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/exec_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct ExecBase *SysBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/exec.h>
#else
#include <inline/exec.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/exec_protos.h>
#endif
#else
#include <pragma/exec_lib.h>
#endif

#endif	/*  _PROTO_EXEC_H  */
