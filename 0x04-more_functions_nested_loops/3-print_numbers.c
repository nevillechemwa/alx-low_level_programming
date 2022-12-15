#include "main.h"

/**
 * print_numbers - print numbers form 0 to 9
 *
 * Return: The numbers form 0 to 9 folowed by a new line
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		_putchar(b + '0');
	}

	_putchar('\n);
}
