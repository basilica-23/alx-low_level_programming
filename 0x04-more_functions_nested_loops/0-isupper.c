#include "main.h"
/**
 * _isupper - a function that prints uppercase.
 * @c: letter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);
{
	int c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar("%d\n", c);
		return (1);
	}
	_putchar("\n");
	return (0);
}

