#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: number of lines
 * variable for the numbers.
 * Return: Always 0.
 */

void print_line(int n)
{
	int t;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (t = 1; t <= n; t++)
			_putchar('_');

		_putchar('\n');
	}
}
