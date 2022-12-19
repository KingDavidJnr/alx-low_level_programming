#include <stdio.h>
#include "main.h"

/**
 * rev_string - Updated values
 * @s: value to be evaluated
 * Return: void
 */

void rev_string(char *s)
{

int len = _strlen(str);

if (len % 2 == 0)
len = len / 2;

else
len = (len + 1) / 2;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns lenght
 */

int _strlen(char *s)
{
int count, inc;
inc = 0;

for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
