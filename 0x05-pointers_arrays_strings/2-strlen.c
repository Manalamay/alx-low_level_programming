#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: string to be countd
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
