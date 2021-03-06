#ifndef CFL_H
#define CFL_H

#define fbyte unsigned char

#include <string>
#include <vector>
#include <iostream>

using std::string;

using std::vector;

using std::cout;
using std::endl;

/*
 Operating System Definition names.
 
 _WIN32
 _WIN64
 __unix
 __unix__
 __APPLE__
 __MACH__
 __linux__
 __FreeBSD__
 */

#if defined(__APPLE__)
	#define MACOSX
	#include <SDL2/SDL.h>
	#include <GLUT/GLUT.h>
#elif defined(_WIN32) || defined(_WIN64)
	#define WINDOWS
	#include "SDL.h"
	#include "GL/glew.h"
#endif

#include "ArrayList.h"
#include "Stack.h"
#include "Bounds.h"
#include "Bounds2f.h"
#include "lodepng.h"
#include "FoxyImage.h"
#include "Texture.h"
#include "SpriteSheet.h"
#include "Buffer.h"
#include "Bundle.h"
#include "Component.h"
#include "Frame.h"
#include "Panel.h"
#include "GL.h"
#include "Color.h"
#include "Event.h"
#include "FrameEvent.h"
#include "MouseEvent.h"
#include "FrameListener.h"
#include "MouseListener.h"
#include "Mouse.h"
#include "FoxyTime.h"
#include "ResourceLocator.h"
#include "Intersects.h"
#include "FontText.h"
#include "Font.h"

#endif