#include "main.h"

/**
* get_endianness - func that checks the endianness
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int j = 2;


	if (j & 1)
		return (0);
	else
		return (1);
}
