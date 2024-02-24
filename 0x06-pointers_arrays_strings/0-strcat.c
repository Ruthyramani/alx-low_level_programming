#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to which other string should be copied
 * @src: string to be concatenated
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	do {
		dest[j] = src[i];
		j++;
		i++;
	} while (src[i] != '\0');

	dest[j] = '\0';

	return (dest);
}
