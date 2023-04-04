/**
* _strstr - a function that locates a substring
* @haystack: string
* @needle: string
* Return: a pointer to the beginning of substring or NULL
**/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int len;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (len = i, j = 0; needle[j] != '\0'; j++, len++)
		{
			if (needle[j] != haystack[len] || haystack[len] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
