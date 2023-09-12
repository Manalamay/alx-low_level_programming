#include "main.h"

/**
 * print_alphabet_x10 - function print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
}
