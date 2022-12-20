#include "main.h"
/**
 * _puts - print a string
 * @str: string to be  printed
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
