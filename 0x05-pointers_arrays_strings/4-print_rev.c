#nclude "main.h"

/**
 * print_rev - printing a sting in reverse
 * @s: a string to print
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[0] !+ '\0')
		len++;
	while(len)
		_putchar(s[--len]);
	_putchar('\n');
}
