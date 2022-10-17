#include <stdio.h>
/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: (0)
 *
 */
int main(void)
{
	char revLa;

	for (revLa = 'z'; revLa >= 'a'; revLa--)
		putchar(revLa);
	putchar('\n');
	return (0);
}
