#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "xyc.h"

extern gameWindow* window;

static PyObject* drawLine(PyObject* self, PyObject* args)
{
    int x1,y1,x2,y2;
    if ( args == NULL)
    {
        args = PyTuple_New(0);
    }
    int ret = PyArg_ParseTuple(args, "iiii", &x1, &y1, &x2, &y2);
    if ( ret )
    {
        window->drawLine(x1,y1,x2,y2);
    }

    Py_RETURN_NONE;
}

static PyMethodDef graphicsMethod[] =
{
       {"drawLine",         (PyCFunction)drawLine,       METH_VARARGS,     "drawLine, begin(x,y) to (x1,y1)"},
       {NULL, NULL, NULL, NULL},
};

void initPython()
{
    Py_InitModule("graphics", graphicsMethod);
    PyImport_AddModule("graphics");
}

#endif // GRAPHICS_H
