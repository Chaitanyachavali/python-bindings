#include "cmathlibmod.h"

PyMethodDef mathFunctions[] = {
	{	"add",
		(PyCFunction)pAdd,
		METH_VARARGS,
		"Add function"},
	{	"sub",
		(PyCFunction)pSub,
		METH_VARARGS,
		"Subract function"},
	{	"mul",
		(PyCFunction)pMul,
		METH_VARARGS,
		"Multiply function"},
	{	"divide",
		(PyCFunction)pDivide,
		METH_VARARGS,
		"Divide function"},
	{	"mod",
		(PyCFunction)pMod,
		METH_VARARGS,
		"Modulus function"},
	{	"power",
		(PyCFunction)PPower,
		METH_VARARGS,
		"Power function"},
	{	"sumofn",
		(PyCFunction)pSumofn,
		METH_VARARGS,
		"Sum of n numbers"},
	{	"factorial",
		(PyCFunction)pFactorial,
		METH_VARARGS,
		"Factorial function"},

	{	NULL}
};

#if PY_MAJOR_VERSION >= 3

PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	"cmathlibmod",
	"Math module package",
	-1,
	mathFunctions,
	NULL,
	NULL,
	NULL,
	NULL
};

PyMODINIT_FUNC PyInit_cmathlibmod(void) {
	return PyModule_Create(&helloworld_mod);
}

#else

void initcmathlibmod(void) {
	Py_InitModule3("cmathlibmod", mathFunctions, "Math module package");
}

#endif
