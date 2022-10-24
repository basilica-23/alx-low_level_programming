#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * on error, -1 is returned, and set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
