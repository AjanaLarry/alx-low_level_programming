#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: source string
 * Return: number of bytes in the initial segment of s
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	
	for  (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
