// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#if defined(_MSC_VER) || defined(__BORLANDC__)

#define _USE_MATH_DEFINES
#include <math.h>

// MSVC versions prior to 12 did not provided acosh, asinh, atanh functions in standard library
#if (defined(_MSC_VER) && (_MSC_VER < 1800)) || defined(__BORLANDC__)
__Standard_API double __cdecl acosh ( double );
__Standard_API double __cdecl asinh ( double );
__Standard_API double __cdecl atanh ( double );
#endif

#endif  /* _MSC_VER */

