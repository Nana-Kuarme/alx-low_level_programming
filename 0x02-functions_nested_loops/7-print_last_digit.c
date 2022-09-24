#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: integer to get last digit of
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar('0' + a);
	return (a);
}
