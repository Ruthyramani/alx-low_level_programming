#include "main.h"

/**
 * _strcpy - copies the string pointed by a pointer to a buffer
 * pointed by another
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
