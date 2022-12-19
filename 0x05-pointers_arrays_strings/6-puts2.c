#include <stdio.h>
#include "main.h"

/**
 * puts2 - print pair values
 * @str: value to be evauated
 * Return: void
 */

void puts2(char *str)
{

int len = 0;
int l = 0;
char *y = str;
int z;

while (*y != '\0')
{
y++;
len++;
}

for (z = 0 ; z <= l ; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}

}

_putchar('\n');
}
