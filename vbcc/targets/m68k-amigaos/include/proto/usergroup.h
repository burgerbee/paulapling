#ifndef _PROTO_USERGROUP_H
#define _PROTO_USERGROUP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#if !defined(CLIB_USERGROUP_PROTOS_H) && !defined(__GNUC__)
#pragma stdargs-on
#include <clib/usergroup_protos.h>
#pragma stdargs-off
#endif

#ifndef __NOLIBBASE__
extern struct Library *UserGroupBase;
#endif

#ifdef __GNUC__
#ifdef __AROS__
#include <defines/usergroup.h>
#else
#include <inline/usergroup.h>
#endif
#elif defined(__VBCC__)
#ifndef _NO_INLINE
#include <inline/usergroup_protos.h>
#endif
#else
#include <pragma/usergroup_lib.h>
#endif

#endif	/*  _PROTO_USERGROUP_H  */
