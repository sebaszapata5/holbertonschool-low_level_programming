#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: number of lines
 * variable for the numbers.
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int t;
	int e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (t = 1; t <= n; t++)
		{
			for (e = 1; e <= t; e++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
