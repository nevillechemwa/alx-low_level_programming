#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - cause normal process termination with status value of 98
 * @b: integer to be checked
 * Return: Always 0
 */
void *malloc_checked(unsigned int b);
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
