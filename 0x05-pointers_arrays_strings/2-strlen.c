#include "main.h"
/**
 *  _strlen - returns the length of a string
 * @s: string length
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;


	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
