#include "main.h"
/**
 * swap_int - swap two variables
 * @a: first variable
 * @b: second variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int q;

	q = a;
	*a = *b;
	*b = q;
}
