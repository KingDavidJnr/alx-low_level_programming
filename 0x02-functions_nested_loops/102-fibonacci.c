#include <stdio.h>

/**
 * main - Displays first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int n;

int t1 = 1;
int t2 = 2;

int nextTerm = t1 + t2;

for (i = 1; n <= 50; ++i)
{
printf("%d, " int nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}

return (0);
}
