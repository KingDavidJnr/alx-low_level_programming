#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a srting to stdout
 * @str: value to be eveluated
 * Return: void
 */

void _puts(char *str)
{

int l = 0;

while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}

_putchar('\n');
}
