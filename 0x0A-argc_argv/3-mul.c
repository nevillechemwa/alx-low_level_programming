#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 *
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		if (argc != 3)
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
