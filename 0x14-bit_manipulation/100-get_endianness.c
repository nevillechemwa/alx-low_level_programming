#include "main.h"

/**
 * get_endianness - how are numbers ordered by mag
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char*) &i;
	return ((int)*c);
}
