///==========================================================================
/// \file	Matrix4x4.cpp
/// \brief	
/// \date	08/02/2006
/// \author	Kyle Swaim
/// \note   Elemental Engine
///         Copyright (c)  2005-2008 Signature Devices, Inc.
///
///         This code is redistributable under the terms of the EE License.
///
///         This code is distributed without warranty or implied warranty of
///			merchantability or fitness for a particular purpose. See the 
///			EE License for more details.
///
///         You should have received a copy of the EE License along with this
///			code; If not, write to Signature Devices, Inc.,
///			3200 Bridge Parkway Suite 102, Redwood City, CA 94086 USA.
///==========================================================================

#include "stdafx.h"
#include "Matrix4x4.h"

IMatrix4x4Implementation *Matrix4x4::impl = NULL;

namespace ElementalEngine
{

void* GetActiveMathImplementation( DWORD dwImplementationName );

int SetMatrix4x4Implementation()
{
	Matrix4x4::impl = (IMatrix4x4Implementation*)GetActiveMathImplementation(CHashString(_T("Matrix4x4DefaultImplementation")).GetUniqueID());
	return true;
}

} //namespace ElementalEngine
