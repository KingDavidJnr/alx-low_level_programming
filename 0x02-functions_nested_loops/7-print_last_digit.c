#include "main.h"

/**
 * print_last_digit - displays the last digit
 * of a number
 *
 * @n: input number as an integer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
int l;

l = n % 10;

if (l < 0)
{
_putchar(-1 + '0');
return (-1);
}

else
{
_putchar(1 + '0');
return (1);
}

}
