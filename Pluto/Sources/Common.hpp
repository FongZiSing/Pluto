//
// Common.hpp
//
//       Copyright (c) Pluto Render. All rights reserved.
//       @Author FongZiSing
//
// A set of useful macro definitions.
//
#pragma once



// Limits of compiler.
#if !defined(WIN32) && !defined(_WIN32) && !defined(_MSC_VER)
#error "[Pluto] Visual studio compiler required!"
#endif

#if defined(_MSVC_LANG) && !(_MSVC_LANG > 201703L) || !defined(__cplusplus)
#error "[Pluto] C++20 compiler required!"
#endif



// C++ RunTime Header.
#include <cassert>



// Re-define some keyword.
#ifndef force_inline
#define force_inline __forceinline
#endif

#ifndef force_noinline
#define force_noinline __declspec(noinline)
#endif

#ifndef scope_restrict
#define scope_restrict __restrict
#endif

#ifndef return_restrict
#define return_restrict __declspec(restrict)
#endif

#ifndef warn_nodiscard
#define warn_nodiscard [[nodiscard]]
#endif

#ifndef warn_deprecated
#define warn_deprecated(message) [[deprecated(message)]]
#endif

#ifndef force_softbreak
#define force_softbreak *(volatile int*)0 = 0
#endif

#ifndef interface_as
#define interface_as __declspec(novtable)
#endif

#ifndef allocator_as
#define allocator_as __declspec(allocator)
#endif

#ifndef without_globalvar
#define without_globalvar __declspec(noalias)
#endif

#ifndef inline_variable
#define inline_variable __declspec(selectany)
#endif

#ifndef branch_likely
#define branch_likely [[likely]]
#endif

#ifndef branch_unlikely
#define branch_unlikely [[unlikely]]
#endif



using int8 = signed char;
using int16 = short;
using int32 = int;
using int64 = long long;

using uint8 = unsigned char;
using uint16 = unsigned short;
using uint32 = unsigned int;
using uint64 = unsigned long long;

using wchar = wchar_t;
static_assert(sizeof(wchar) == sizeof(uint16));



// All of the warnings that we are able to enable
#pragma warning(default: 4996) // 'function' was declared deprecated.