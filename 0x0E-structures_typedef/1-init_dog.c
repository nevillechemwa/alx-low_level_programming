#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * @d: structure pointer
 * Desc: prints a struct
 * Return: Dog name
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
