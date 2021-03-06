/*
    JPEG images handling plug-ins of Computer Vision Sandbox

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

#include <ximaging_formats.h>
#include "JpegExporterPlugin.hpp"

// List of supported file extensions
const char* JpegExporterPlugin::supportedFileExtensions[] =
{
	"jpg", "jpeg"
};

// List of supported pixel formats
const XPixelFormat JpegExporterPlugin::supportedPixelFormats[] =
{
    XPixelFormatGrayscale8, XPixelFormatRGB24
};

JpegExporterPlugin::JpegExporterPlugin( ) :
    quality( 85 )
{
}

void JpegExporterPlugin::Dispose( )
{
	delete this;
}

// Get property of the plug-in
XErrorCode JpegExporterPlugin::GetProperty( int32_t id, xvariant* value ) const
{
	XErrorCode ret = SuccessCode;

	switch ( id )
    {
    case 0:
        value->type = XVT_U1;
        value->value.usVal = (uint16_t) quality;
        break;

    default:
        ret = ErrorInvalidProperty;
		break;
    }

    return ret;
}

// Set property of the plug-in
XErrorCode JpegExporterPlugin::SetProperty( int32_t id, const xvariant* value )
{
    XErrorCode ret = SuccessCode;

    xvariant convertedValue;
    XVariantInit( &convertedValue );

	// make sure property value has expected type
	ret = PropertyChangeTypeHelper( id, value, propertiesDescription, 1, &convertedValue );

	if ( ret == SuccessCode )
	{
		switch ( id )
		{
		case 0:
			quality = convertedValue.value.ubVal;
			break;
		}
	}

    XVariantClear( &convertedValue );

    return ret;
}

// Get some short description of the file type
xstring JpegExporterPlugin::GetFileTypeDescription( )
{
	return XStringAlloc( "JPEG files" );
}

// Get file extensions supported by the exporter
XErrorCode JpegExporterPlugin::GetSupportedExtensions( xstring* fileExtensions, int32_t* count )
{
	return GetSupportedExtensionsImpl( supportedFileExtensions, XARRAY_SIZE( supportedFileExtensions ),
									   fileExtensions, count );
}

// Get pixel formats supported by the exporter
XErrorCode JpegExporterPlugin::GetSupportedPixelFormats( XPixelFormat* pixelFormats, int32_t* count )
{
    return GetSupportedPixelFormatsImpl( supportedPixelFormats, XARRAY_SIZE( supportedPixelFormats ),
                                         pixelFormats, count );
}

// Save image to the specified file
XErrorCode JpegExporterPlugin::ExportImage( xstring fileName, const ximage* image )
{
    return XEncodeJpeg( fileName, image, quality );
}
