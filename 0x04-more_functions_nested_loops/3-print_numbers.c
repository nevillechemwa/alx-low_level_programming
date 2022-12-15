#include "main.h"

/**
 * print_numbers - Print numbers form 0 to 9
 *
 * Return: The numbers form 0 to 9 folowed by a new line
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n);
}
