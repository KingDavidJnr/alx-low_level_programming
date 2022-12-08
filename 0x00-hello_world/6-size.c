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

printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));

return (0);

}
