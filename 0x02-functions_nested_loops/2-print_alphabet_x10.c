#include "main.h"

/**
 * prints_alphabets_10x - prints 10 times of the alhabets in lower case
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		} i++;
		_putchar('\n');
	}
}
