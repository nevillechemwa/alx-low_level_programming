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
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
