#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: dog identification
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("nil\n");
	else
		print("Name: %s\n", d->name);

	if ((*d).age < 0)
                printf("nil\n");
        else
                print("Age: %f\n", d->age);

	if ((*d).owner == NULL)
                printf("nil\n");
        else
                print("Owner: %s\n", d->owner);
}
