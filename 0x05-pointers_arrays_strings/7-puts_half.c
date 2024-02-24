#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int start = l / 2;
	int idx;

	if (l % 2 == 1)
		start++;

	for (idx = start; idx < l; idx++)
	{
		_putchar(str[idx]);
	}

	_putchar('\n');
}

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string, returns 0 if empty
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
