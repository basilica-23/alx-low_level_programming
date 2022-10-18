#include "main.h"
/**
 * times_table - a function that prints the 9 times tables, starting with 0
 * r = row, cl = column, d = digits of current result
 * Return: times table
 * add extre space past single digit
 */
void times_table(void)
{
	int r, cl, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cl = 1; cl <= 9; cl++)
		{
			d = (r * cl);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (cl < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
