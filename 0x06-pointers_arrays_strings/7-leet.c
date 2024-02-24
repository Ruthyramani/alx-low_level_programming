#include "main.h"

/**
 * leet - encodes s string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char let_upper[] = {'A', 'E', 'O', 'T', 'L'};
	char let_lower[] = {'a', 'e', 'o', 't', 'l'};
	int codes[] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == let_upper[j] || s[i] == let_lower[j])
			{
				s[i] = '0' + codes[j];
				break;
			}
		}

		i++;
	}

	return (s);
}
