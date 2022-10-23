
#include "main.h"

/**
 * _isupper - a function that checks for a
 * @c: variable text
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}