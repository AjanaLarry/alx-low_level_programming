#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - new data type representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*Description: Defines metadata about the dog and type of dogs
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - Typedef for struct dog
**/
typedef struct dog dog_t;

/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
