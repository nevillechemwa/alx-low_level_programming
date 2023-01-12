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
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
	}
	return (a);
}
