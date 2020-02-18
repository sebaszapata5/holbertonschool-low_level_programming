#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @str: variable s
 * Return: Always 0.
 */
void _puts(char *str)
{
	short i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
