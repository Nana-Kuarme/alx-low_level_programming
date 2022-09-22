#include "main.h"

/**
 * prints_alphabets_10x - prints 10 times of the alhabets in lower case
 *
 * Return: Always 0
 */
void print_alphabet_10x(void)
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
