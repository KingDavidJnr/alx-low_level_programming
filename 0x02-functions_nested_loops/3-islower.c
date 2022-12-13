#include "main.h"

/**
 * _islower - Displays 1 if the input is "a"
 * lowercase character. Another cases displays 0
 *
 * @c: The characters in lowercase
 *
 * Return: 1 for lowercase, 0 for other exceptions
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}
