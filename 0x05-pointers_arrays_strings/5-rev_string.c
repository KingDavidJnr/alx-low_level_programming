#include <stdio.h>
#include "main.h"

/**
 * rev_string - Updated values
 * @s: value to be evaluated
 * Return: void
 */

void rev_string(char *s)
{

char *t;
int i, len, len1;

len = 0;
len1 = 0;

while (s[len] != '\0')
{
len++;
}

len1 = len - 1;

for (i = 0; i < len / 2; i++)
{
*t = s[i];
s[i] = s[len1];
s[len1--] = *t;
}
}
