#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("Size of a char: %zu byte(s)\n", (unsigned long)  sizeof(acharacter));
printf("size of an int: %zu byte(s)\n", (unsigned long) sizeof(ainteger));
printf("Size of a long int: %zu byte(s)\n", (unsigned long) sizeof(along));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long) sizeof(alonglong));
printf("Size of a float: %zu byte(s)\n", (unsigned long) sizeof(afloat));

return (0);

}
