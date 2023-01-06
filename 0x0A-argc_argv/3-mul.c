#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 *
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	result = (int) *argv[1] * (int) *argv[2];
	printf("%d\n", total);
	return (0);
}
