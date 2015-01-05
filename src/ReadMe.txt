QT pro file requirement

Libraries:

glm glew glfw 


glfw3.dll required with the .exe

INCLUDEPATH += C:\OpenGL\glew-1.11.0\include
INCLUDEPATH += C:\OpenGL\glm-0.9.5.4\glm

LIBS += -LC:\Qt\Tools\mingw482_32\lib\ -lglfw3
LIBS += -LC:\OpenGL\glew-1.11.0-win32\glew-1.11.0\lib\Release\Win32 -lglew32 -lglew32s

