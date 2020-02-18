#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: variable
 * Return: Always 0.
 */

void puts2(char *str)
{
	short i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
