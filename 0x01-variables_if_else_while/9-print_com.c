#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit num
 *
 * Return:(0)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	put('\n');
	return (0);
}