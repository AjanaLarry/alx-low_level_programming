#include "main.h"
/**
 * set_bit - func that sets the value of 
 * a bit to 1 at a given index
 * @n: pointer to int
 * @index: index to set 1
 * Return: int value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sas;
	if (index >= 64)
		return (-1);
	sas = 1;
	*n = *n | (sas << index);
	return (1);
}
