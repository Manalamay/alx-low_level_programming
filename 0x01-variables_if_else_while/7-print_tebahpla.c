#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicate successful execution
 */

int main(void)
{
	char n;

	for (n = 'z' ; n <= 'a' ; n--)
		putchar(n);
	putchar('\n');
	return (0);
}

