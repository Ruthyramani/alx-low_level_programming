#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	int number = n;
	int trunc = calc_trunc(number);
	int tmp_dgt;

	if (number < 0)
	{
		number *= -1;
		_putchar('-');
	}

	while (trunc != 0)
	{
		tmp_dgt = number / trunc;
		number -= (tmp_dgt * trunc);
		trunc /= 10;
		_putchar('0' + tmp_dgt);
	}
}

/**
 * count_digits - counts digits in a number
 * @n: number
 * Return: number of digits in number
 */
int count_digits(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}

/**
 * calc_trunc - computes the initial trunc value of a number
 * @n: number
 * Return: value of trunc
 */
int calc_trunc(int n)
{
	int trunc = 1;
	int p;

	for (p = 0; p < count_digits(n) - 1; p++)
	{
		trunc *= 10;
	}

	return (trunc);
}
