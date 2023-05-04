#include "main.h"
/**
* binary_to_uint - func that converts a
*binary number to an unsigned int
* @b: pointer to a binary
* Return: converted number or 0
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	sum = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum <<= 1;
		if (b[i] & 1)
			sum += 1;
		i += 1;
	}
	return (sum);
}
