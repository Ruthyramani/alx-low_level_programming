#include "main.h"

/**
 * string_toupper - changes all lowercase in a string to uppercase
 * @s: string
 * Return: modified string (s) pointer
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (char) s[i] + 'A' - 'a';
		}

		i++;
	}

	return (s);
}
