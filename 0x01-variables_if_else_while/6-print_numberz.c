#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: O
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}
