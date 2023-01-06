#include "main.h"
#include <stdio.h>

/**
 * main - program entry point
 * @argc: arguement count
 * @argv: an array of character strings containing the arguments
 * Return: Always 0 (succes)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
