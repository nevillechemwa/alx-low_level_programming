#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
