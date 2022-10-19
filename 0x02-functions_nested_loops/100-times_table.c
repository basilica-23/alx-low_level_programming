#include "main.h"
/**
 * print_times_table - prints the times table of the input, starting  with 0.
 * @num: The value of the times table to be printed
 */
void print_times_table(int num)
{
	int n, mult, prod;

	if (num >= 0 && num <= 15)
	{
		for (n = 0; n <= num; n++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = n * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
