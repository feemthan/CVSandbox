/*
    Image processing effects plug-ins of Computer Vision Sandbox

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

#pragma once
#ifndef CVS_GENERATE_GRAIN_TEXTURE_PLUGIN_HPP
#define CVS_GENERATE_GRAIN_TEXTURE_PLUGIN_HPP

#include <iplugintypescpp.hpp>

class GenerateGrainTexturePlugin : public IImageGenerationPlugin
{
public:
    GenerateGrainTexturePlugin( );

    // IPluginBase interface
    void Dispose( );

    XErrorCode GetProperty( int32_t id, xvariant* value ) const;
    XErrorCode SetProperty( int32_t id, const xvariant* value );

    // IImageGenerationPlugin interface
    virtual XErrorCode GenerateImage( ximage** dst );

private:
    static const PropertyDescriptor** propertiesDescription;

    uint16_t    width;
    uint16_t    height;
    uint16_t    spacing;
    float       density;
    bool        isVertical;
    uint16_t    randValue;
};

#endif // CVS_GENERATE_GRAIN_TEXTURE_PLUGIN_HPP
