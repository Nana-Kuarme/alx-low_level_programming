#include <stdio.h>

/**
 * main -Prints number between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		i = 48;
		while (i < 70)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 69 && e == 68)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
