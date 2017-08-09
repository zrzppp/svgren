#pragma once

#include <utki/config.hpp>


#if M_OS == M_OS_WINDOWS || M_OS_NAME == M_OS_NAME_IOS
#	include <cairo.h>
#else
#	include <cairo/cairo.h>
#endif

namespace svgren{

void cairoImageSurfaceBlur(cairo_surface_t* surface, double radius);

}
