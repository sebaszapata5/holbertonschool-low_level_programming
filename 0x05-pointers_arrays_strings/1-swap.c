#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: variable a
 * @b: variable b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
