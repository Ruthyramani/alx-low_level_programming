#include "main.h"

/**
 * _strncat - concatenates two string using a limited number of charcaters
 * @dest: destintion string
 * @src: source string
 * @n: highest number of characters to the characters to be concatenated
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

		if (src[j] == '\0')
			break;
	}

	dest[i] = '\0';

	return (dest);
}
