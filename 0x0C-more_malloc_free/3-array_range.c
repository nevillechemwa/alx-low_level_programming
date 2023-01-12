#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of int
 * @min: minimum input
 * @max: maximum imput
 * Return: array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * full);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}
