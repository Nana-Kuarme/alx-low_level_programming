#include "main.h"

/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: 1 if +, 0 if zero, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
