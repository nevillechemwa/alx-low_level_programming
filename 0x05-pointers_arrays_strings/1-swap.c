#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: First integer to swap
 * @b: Second interger to swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
