#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: negaive number if s1 < s2, positive number if s1 > s2
 * 0 if s1 equals s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int value = 0;

	while (s1[i])
	{
		if (!s2[i])
			return (s1[i]);
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			value = s1[i] - s2[i];
			break;
		}
	}

	if (s1[i] == '\0')
		return (-s2[i]);

	return (value);
}
