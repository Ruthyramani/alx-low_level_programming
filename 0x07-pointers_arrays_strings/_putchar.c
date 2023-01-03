#include "main.h"
#include <unistd>

/**
 * _putchar - write the character c
 * @c: the character to be printed
 *
 * Return: 1 on succes
 * on error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
