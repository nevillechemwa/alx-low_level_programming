#include "function_pointers.h"

/**
 * array_iterator - array that executes a function
 * @array: array
 * @size: size of an array
 * @action: the pointer to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
