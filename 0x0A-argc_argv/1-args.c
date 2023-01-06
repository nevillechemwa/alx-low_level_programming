#include "main.h"
#include <stdio.h>

/**
 * main - program entry point
 * @argc: arguement count
 * @argv: arguement value
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc -1);
	return (0);
}
