#include "main.h"

/**
 * _islower - checks if a character is lowercase or not 
 *
 * @c: character to use
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	int c = 'a';

	if (c < 'z')
	{
		_putchar(1);
		c++;
	} else if (c ~= 'a'; c ~<= 'z')
	{
		_putchar(0);
	}
}
