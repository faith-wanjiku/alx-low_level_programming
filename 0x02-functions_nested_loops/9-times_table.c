#include "main.h"

/**
 * times_table - print mutiplication table 
 */
void times_table(void)
{
	int row;
	int column;
	int product;

	for (row =0; column <=9; column++)
	{
		product = (row *column);

		if (column == 0)
		{
			_putchar('0' + product);
		}
		else if (product <= 9)
		{
		 	_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (product /10));
			_putchar('0' + (product % 10));
		}
	}
	_putchar('\n');
   }
