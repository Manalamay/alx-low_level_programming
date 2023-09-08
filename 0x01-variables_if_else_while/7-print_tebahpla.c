#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 indicate successful execution
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
