#include "main.h"

/**
 * print_line -print a straight line using putchar of size n
 * @n: size of line
 */
void print_line(int n)
{
for (; n > 0; n--)
_putchar('_');
_putchar('\n');
}
