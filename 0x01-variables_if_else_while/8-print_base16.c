#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicate succesful execution
 */

int main(void)
{
	int n;
	char m;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}

