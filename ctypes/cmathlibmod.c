#include <stdio.h>

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

