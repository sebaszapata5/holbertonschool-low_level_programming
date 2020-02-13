#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: command
 * variable for the numbers.
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int ach;
	int lag;
	int inc;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (lag = 1; lag <= size; lag++)
		{
			for (ach = 1; ach <= size; ach++)
			{
				inc = -(ach - size);
				if (lag >= (inc + 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
