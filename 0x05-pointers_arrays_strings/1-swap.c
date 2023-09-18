#include "main.h"

/**
 * swap_int - function that swap values
 * @a: pointer to the value to be swaped
 * @b: pointer to the value to be swaped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

