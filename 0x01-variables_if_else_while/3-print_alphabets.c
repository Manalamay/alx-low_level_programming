#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 always
 *
 */

int main(void)

{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		putchar(n);
	for (n = 'A' ; n <= 'Z' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
