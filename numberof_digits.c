#include "main.h"

/**
*_abs- Finds the absolute value of n
*@n: An integral number
*
*Return: returns the magnitude of any integer n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
/**
*numberof_digits- counts the number of digits of an integer
*@n: the integral number
*
*Return: int. returns the number of digits in n
*/
int numberof_digits(int n)
{
	int num = _abs(n);
	int count = 1;

	while (num >= 10)
	{
		count++;
		num = num / 10;
	}
	return (count);
}
