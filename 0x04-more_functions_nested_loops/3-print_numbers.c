#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 * variable for the numbers.
 * Return: Always 0.
 */

void print_numbers(void)

{
	int c;

	for (c = '0'; c <= '9'; c++)
		{
		_putchar (c);
		}

	_putchar ('\n');
}
