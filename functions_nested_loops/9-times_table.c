#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			prod = row * col;
			if (col == 0)
			{
				_putchar(prod + '0');
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
