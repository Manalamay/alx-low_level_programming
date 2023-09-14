#include "main.h"

/**
 * more_numbers - function that print 10 times numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
