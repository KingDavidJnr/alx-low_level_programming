#include <stdio.h>
#include "main.h"

/**
 * rev_string - Updated values
 * @s: value to be evaluated
 * Return: void
 */

void rev_string(char *s)
{

int len = 0;
int l;
char *y = s;
int e = 0;
int x;
char n;

while (*y != '\0')
{
y++;
len++;
}

l = len - 1;

for ( ; e < ((1 / 2) + 1) ; e++)
{
x = (1 - e);
n = s[e];
s[e] = s[x];
s[x] = n;
}

}
