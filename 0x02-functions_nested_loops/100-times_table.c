#include "main.h"

/**
 * print_times_table - Displays 'n' time tables
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no value
 */

void print_times_table(int n)
{
int a, b, op;

if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
_putchar('0');

for (b = 1; b <= n; b++)
{
op = a * b;

_putchar(',');
_putchar(' ');

if (op <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar(op + '0');
}

else if (op <= 99)
{
_putchar(' ');
_putchar((op / 10) + '0');
_putchar((op % 10) + '0');
}

else
{
_putchar(((op / 100) % 10) + '0');
_putchar(((op / 10) % 10) + '0');
_putchar((op % 10) + '0');
}
}

_putchar('\n');
}
}
}
