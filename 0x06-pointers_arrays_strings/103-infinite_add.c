#include "main.h"

/**
 * infinite_add - C function that adds two numbers stored...
 * ...in strings to a buffer.
 * @n1: first number to be added
 * @n2: second number
 * @r: stored result
 * @size_r: size of buffer
 * Return: returns pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - adds two numbers in 2 strings
 * @n1: string containing 1st No.
 * @n2: string containing 2nd No.
 * @r: Buffer to store result
 * @r_index: Current index of buffer
 * Return: return conditional results
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
int num, tens = 0;

for (; *n1 && *n2; n1--, n2--, r_index--)
{
num = (*n1 - '0') + (*n2 - '0');
num += tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n1; n1--; r_index++)
{
num = *(n1 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n2; n2--; r_index--)
{
num = (*n2 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

}
