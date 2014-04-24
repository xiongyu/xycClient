#-------------------------------------------------
#
# Project created by QtCreator 2014-04-13T11:37:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG   += console
TARGET = xycClient
TEMPLATE = app


SOURCES += main.cpp\
        gamewindow.cpp \
    gameview.cpp \
    gamescene.cpp \
    sprite.cpp

HEADERS  += gamewindow.h \
    gameview.h \
    gamescene.h \
    graphics.h \
    xyc.h \
    game.h \
    sprite.h


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../GameDev/Python-2.7.6/PCbuild/ -lpython27
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../GameDev/Python-2.7.6/PCbuild/ -lpython27_d
else:unix: LIBS += -L$$PWD/../../GameDev/Python-2.7.6/PCbuild/ -lpython27

INCLUDEPATH += $$PWD/../../GameDev/Python-2.7.6/PC
INCLUDEPATH += $$PWD/../../GameDev/Python-2.7.6/PCbuild
INCLUDEPATH += $$PWD/../../GameDev/Python-2.7.6/Include
DEPENDPATH += $$PWD/../../GameDev/Python-2.7.6/PCbuild

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../GameDev/Python-2.7.6/PCbuild/libpython27.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../GameDev/Python-2.7.6/PCbuild/libpython27_d.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../GameDev/Python-2.7.6/PCbuild/python27_.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../GameDev/Python-2.7.6/PCbuild/python27_d.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../GameDev/Python-2.7.6/PCbuild/libpython27_.a
