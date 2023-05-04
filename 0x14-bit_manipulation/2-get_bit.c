#include "main.h"

/**
 * get_bit - func returns the value of a bit 
 * at a given index
 * @n: long int
 * @index: index
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
