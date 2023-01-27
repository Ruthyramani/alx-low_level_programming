#include "main.h"
/**
 *_strlen - count array
 *@s: array of elements
 *Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}

	return (i);
}
