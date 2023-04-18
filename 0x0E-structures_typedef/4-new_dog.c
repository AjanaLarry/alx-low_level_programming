#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, len2, i;
	dog_t *doggy;

	nlen = len2 = 0;
	while (name[nlen++])
		;
	while (owner[len2++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(len2 * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < len2; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
