#include <stdio.h>

void first(void) attribute((constructor));

/**
 * first - print before the main function is executed
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore
			my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature,
		challenges one to a race.)\n");
	return (0);
}
