#include "main.h"

/**
 * print_array - print n element of array
 * @a: array
 * @n: number of elements
 * Return: vid
 */

void print_array(int *a, int n)
{
int inc;

for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
{
printf("%d, " a[inc]);
}
else
{
printf("%d", a[inc]);
}
}
printf("\n");
}
