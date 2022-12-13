#include "main.h"

/**
 * _isalpha - Displays 1 if the input is c
 * letter in other forms display 0
 *
 * @c: The character in either lowercase or uppercase
 *
 * Return: 1 for letters, Return 0 for exceptions
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

_putchar('\n');

}
