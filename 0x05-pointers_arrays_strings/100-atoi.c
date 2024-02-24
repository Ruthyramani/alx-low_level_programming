#include "main.h"

/**
 * _atoi - converts a string to a number
 * @s: string containing number
 * Return: number
 */
int _atoi(char *s)
{
	int index = 0;
	int n = 0;

	if (contains_digit(s) == 0)
		return (0);


	while (s[index] != '\0')
	{
		int i = 0;

		if (is_number(s[index]) == 1)
		{
			i = index;

			if (is_number(s[i]) == 1)
			{
				n = get_number(i, s);
			}

			break;
		}

		index++;
	}

	if (number_negative(s) == 1)
		return (n * -1);

	return (n);
}

/**
 * get_number - get number at a particular position in a string
 * @idx: postion of the number
 * @s: string containg the number
 * Return: number
 */
int get_number(int idx, char *s)
{
	int number = 0;

	for (; is_number(s[idx]) == 1; idx++)
	{
		number += s[idx] - 48;
		number *= 10;
	}

	return (number / 10);
}

/**
 * is_number - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if ch is digit, 0 otherwise
 */
int is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * contains_digit - checks if a string contains a digit
 * @str: string to be checked
 * Return: 1 if true, 0 if false
 */
int contains_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (is_number(str[i]) == 1)
		{
			return (1);
		}

		i++;
	}

	return (0);
}

/**
 * number_negative - checks if the number is negative
 * @str: string containing a number
 * Return: 1 if negative 0 if not negative
 */
int number_negative(char *str)
{
	int i = 0;
	int count = 0;

	while (is_number(str[i]) != 1)
	{
		count++;
		i++;
	}

	if (count % 2 == 0)
		return (0);
	else
		return (1);
}
