#include <stdio.h>
#include "main.h"

/**
 * rev_string - Updated values
 * @s: value to be evaluated
 * Return: void
 */

void rev_string(char *s)
{

int i = 0, length;
length = _strlen(s) - 1;

while (length > i)
{
void swap_char(s + length, s + i);
i++;
length--;
}
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
int count, inc;
inc = 0;

for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}


/**
 * swap_char - swap two variables
 * @a: first character
 * @b: second character
 * Return: void
 */

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
