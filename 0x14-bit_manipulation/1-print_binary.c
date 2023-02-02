#include "main.h"

/**
 * print_binary - printg the binary rep of a number
 * @n: a string of 0 and 1 chars
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
