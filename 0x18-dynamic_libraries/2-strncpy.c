#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: max number of characters to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		else
			break;
		i++;
	}

	while (dest[i] != '\0')
	{
		if (i < n)
			dest[i] = '\0';
		i++;
	}

	return (dest);
}
