
#include "main.h"

/**
 * _isupper - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}