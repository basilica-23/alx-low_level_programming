#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - afunction that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: (0)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
