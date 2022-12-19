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

<<<<<<< HEAD
for (e < ((1 / 2) + 1) e++)
{
x = (l - e);
n = s[e];
s[e] = s[x];
s[x] = n;
=======
for (i = 0; i < len / 2; i++)
{
*t = s[i];
s[i] = s[len1];
s[len1--] = *t;
>>>>>>> cbc4dc9a1c592cbfd258dc49bfea54f6384820b8
}
}
