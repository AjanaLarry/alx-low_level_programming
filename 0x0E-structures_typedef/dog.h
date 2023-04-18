#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - new data type representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
