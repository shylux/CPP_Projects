Toolchains
---
To be able to do any meaningful work on OS X with either Objective-C, 
C or C++ <br> 
you must first install the Apple Development toolchain. 
To do so, log in to the Apple App Store and <br> 
install Xcode. You will be guided through the rest of the setup (also install the command line tools).

Further, you need to install CMake. Download it from here:
'https://cmake.org/download/' <br> and install it accordingly. 
Then follow the instructions given in class.

OpenGL
---
Either Core OpenGL up to 4.1 (depending on your hardware) or Legacy OpenGL 2.1
is supported! <br> 
Eliminate everything in the code which uses features of OpenGL > 4.1.

GLEW
---
Technically not really needed on OS X. To be consistent with the other platforms, the library is linked to anyway. As such no OS specific checks are needed.

The header file `<GL/glew.h>` needs to be included before any OpenGL/GLUT
specific headers.<br>
Furthermore `glewExperimental = GL_TRUE;`
needs to be set before `glewInit();` . <br>
The two statements must happen **after** `glutCreateWindow(...);`.

There might be some `OpenGL Get Error Code: 1280 (invalid enumerant)` <br>
error messages during rendering. This is due to GLEW according to: <br>
'https://www.opengl.org/wiki/OpenGL\_Loading\_Library' (GLEW section).

FLTK for OS X
---
FLTK uses either Legacy OpenGL (default) or Core OpenGL.
To enable the Core profile, set <br>
`glutInitDisplayMode(... | FL_OPENGL3);` before calling `glutCreateWindow(...);`. 

GLUT
---
Replace all include directives with `<FL/glut.H>` .

Freeglut
---
Not needed on OS X. Replaced with FLTK's GLUT implementation.