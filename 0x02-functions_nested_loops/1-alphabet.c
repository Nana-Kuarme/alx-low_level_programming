#include "main.h"

/**
 * print_alphabet - Prints alpabet in lowercase
 *
 * Return: Always return 0;
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
