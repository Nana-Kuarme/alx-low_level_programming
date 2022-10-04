#include "main.h"

/**
 *jack_bauer- main thing
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23)
	{
		for (j = 0; i <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
