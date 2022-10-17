#include <stdio.h>
/**
 * main - prints single digits in base 10
 *
 * Return: Always 0
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
		putchar((num1 % 10) + '0');
	putchar('\n');
	return (0);
}
