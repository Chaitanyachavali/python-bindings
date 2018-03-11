#include <stdio.h>
#include <Python.h>

//function to add
int add(int x, int y)
{
	return x+y;
}

//function to substract
int sub(int x, int y)
{
	return x-y;
}

//function to multiply
int mul(int x, int y)
{
	return x*y;
}

//function to divide
int divide(int x, int y)
{
	return x/y;
}

//function to modulus
int mod(int x, int y)
{
	return x%y;
}

//function to find power
int power(int x, int y)
{
	return x^y;
}

//function to sum of n numbers
int sumofn(int x)
{
	int temp;
	temp = (x+1);
	temp = temp*x;
	return temp/2;
}

//function to calculate factorial
int factorial(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x*factorial(x-1);
	}

}


PyObject * pAdd(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", add(num1,num2));
}

PyObject * pSub(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", sub(num1,num2));
}

PyObject * pMul(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", mul(num1,num2));
}

PyObject * pDivide(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", divide(num1,num2));
}

PyObject * pMod(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", mod(num1,num2));
}

PyObject * PPower(PyObject *self, PyObject *args) 
{
	int num1, num2;
	if(!PyArg_ParseTuple(args, "ii", &num1, &num2))
		return NULL;
	return Py_BuildValue("i", power(num1,num2));
}

PyObject * pSumofn(PyObject *self, PyObject *args) 
{
	int num1;
	if(!PyArg_ParseTuple(args, "i", &num1))
		return NULL;
	return Py_BuildValue("i", sumofn(num1));
}

PyObject * pFactorial(PyObject *self, PyObject *args) 
{
	int num1;
	if(!PyArg_ParseTuple(args, "i", &num1))
		return NULL;
	return Py_BuildValue("i", factorial(num1));
}