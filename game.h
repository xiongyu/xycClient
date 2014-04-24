#ifndef GAME_H
#define GAME_H

#include "xyc.h"

extern gameWindow* window;

static PyObject* setWindowSize(PyObject* self, PyObject* args)
{
       int w,h;
       int ret = PyArg_ParseTuple(args, "ii", &w, &h);
       if ( ret )
       {
           qDebug("setwindowsize");
           window->setGeometry(window->pos().x(),window->pos().y(),w, h);
           Py_RETURN_TRUE;
       }
       qDebug("setwidnowsize false");
       Py_RETURN_FALSE;
}

static PyObject* setWindowTitle(PyObject* self, PyObject* args)
{
    char* sTitle[128];
    int ret = PyArg_ParseTuple(args, "s", sTitle);
    if ( ret )
    {
        window->setWindowTitle(QString::fromUtf8(*sTitle));
    }
    Py_RETURN_NONE;
}


static PyMethodDef gameMethod[] =
{
       {"setWindowSize",    (PyCFunction)setWindowSize, METH_VARARGS,     "set window size"},
       {"setWindowTitle",   (PyCFunction)setWindowTitle, METH_VARARGS,     "set Windows Title."},
       {NULL, NULL, NULL, NULL},
};

void initGame()
{
    Py_InitModule("game", gameMethod);
    PyImport_AddModule("game");
}
#endif // GAME_H
