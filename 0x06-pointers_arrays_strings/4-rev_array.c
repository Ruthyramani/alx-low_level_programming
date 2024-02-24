#include "main.h"

/**
 * reverse_array - reverses an array of characters
 * @a: array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{

	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		if (i >= (n - i - 1))
			break;
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
