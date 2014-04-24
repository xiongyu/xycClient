#include "gamewindow.h"
#include "graphics.h"
#include "game.h"
#include "xyc.h"
#include <stdio.h>
#include <QApplication>
#include <QPushButton>

#pragma execution_character_set("utf-8");

extern gameWindow* window;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    window = new gameWindow();
    window->show();
    window->setNewScene();
    Py_NoSiteFlag=1;
    Py_SetPythonHome(".");
    Py_Initialize();
    initPython();
    initGame();
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyString_FromString("script"));
    PyObject *args = NULL;
    PyObject *pModule = PyImport_ImportModule("init");
    if ( !pModule )
    {

        qDebug("import init fail!!");
    }
    else
    {
        PyObject *pFunc = PyObject_GetAttrString(pModule,"gameInit");
        PyObject_CallObject(pFunc,args);
        PyErr_Print();
    }
    int ret = app.exec();

    //release pythoncore
    Py_Finalize();
    delete window;
    return ret;
}
