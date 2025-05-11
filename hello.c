#include <Python.h>

/* Function that will be exposed to Python as hello.world() */
static PyObject* hello_world(PyObject* self, PyObject* args) {
    /* No arguments expected, so ignore args */
    return PyUnicode_FromString("Hello, world from C extension!");
}

/* Method table listing the functions in this module */
static PyMethodDef HelloMethods[] = {
    { "world", hello_world, METH_NOARGS, "Return a greeting string." },
    { NULL, NULL, 0, NULL }  /* Sentinel */
};

/* Module definition structure */
static struct PyModuleDef hellomodule = {
    PyModuleDef_HEAD_INIT,
    "hello",                     /* name of module */
    "A simple C hello world module", /* module documentation */
    -1,                          /* size of per-interpreter state (-1 if global) */
    HelloMethods
};

/* Module initialization function (Python 3) */
PyMODINIT_FUNC
PyInit_hello(void)
{
    return PyModule_Create(&hellomodule);
}

