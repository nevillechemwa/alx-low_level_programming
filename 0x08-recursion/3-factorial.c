#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number to calculate factorial
 * Return: int value
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
