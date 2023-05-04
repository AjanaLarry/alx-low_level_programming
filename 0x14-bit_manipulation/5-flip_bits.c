#include "main.h"

/**
 * flip_bits - func that returns the number of 
 * bits to flip number to another
 * @n: 1st integer
 * @m: 2nd integer
 * Return: number of bits(int)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, sum;

	sum = n ^ m;
	
	for (i = 0; sum != 0; i += 1)
		sum &= (sum - 1);
	return (i);
}
