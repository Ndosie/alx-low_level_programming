#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the values of struct dog
 * @d: struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;

	if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == NULL)
		printf("(nil)");
	else if (d->owner == NULL)
		printf("(nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
