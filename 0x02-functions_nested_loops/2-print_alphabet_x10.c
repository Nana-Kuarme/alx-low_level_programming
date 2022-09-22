#include "main.h"

/**
 * prints_alphabets_10x - prints 10 times of the alhabets in lower case
 *
 * Return: Always 0
 */
void print_alphabet_10x(void)
{
	char i, h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
