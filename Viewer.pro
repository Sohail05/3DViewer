#-------------------------------------------------
#
# Project created by QtCreator 2014-09-20T10:24:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Viewer
TEMPLATE = app


SOURCES += main.cpp \
    object3d.cpp



INCLUDEPATH += C:\OpenGL\glew-1.11.0\include
INCLUDEPATH += C:\OpenGL\glm-0.9.5.4\glm


LIBS += -LC:\Qt\Tools\mingw482_32\lib\ -lglfw3
LIBS += -LC:\OpenGL\glew-1.11.0-win32\glew-1.11.0\lib\Release\Win32 -lglew32 -lglew32s

HEADERS += \
    object3d.h
