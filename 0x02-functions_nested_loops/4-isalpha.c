#include "main.h"

/**
 * _isalpha - function that checks for alphabets charachter
 * @c: function charachter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
