#include "dog.h"
/**
* print_dog - funtions that 
* prints a struct dog
* @d: pointer to my dog 
*/
void print_dog(struct dog *d)
{
        if (d)
        {
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
                printf("Age: %f\n", d->age);
                d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
        }
}
