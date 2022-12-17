#include "main.h"

/**
 * print_sign - print  the sigmn of a number
 * @n: character for this
 * Return: 0 if the character is greater than 0, if not -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}

