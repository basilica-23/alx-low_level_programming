#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
 */
int _strlen(int *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
