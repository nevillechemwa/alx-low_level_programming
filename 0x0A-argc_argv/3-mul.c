#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguements counter
 * @argv: an array to the arguement
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int results = num1 * num2;

		printf("%d\n", results);
		return (0);
	}
}
