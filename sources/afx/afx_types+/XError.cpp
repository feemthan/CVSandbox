/*
    Core C++ types library of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include "XError.hpp"
#include <xtypes.h>
using namespace std;

namespace CVSandbox
{

const string XError::Description( XErrorCode code )
{
    string desc;
    xstring xdesc = XErrorGetDescription( code );

    if ( xdesc != 0 )
    {
        desc = string( xdesc );
        XStringFree( &xdesc );
    }

    return desc;
}

} // namespace CVSandbox
