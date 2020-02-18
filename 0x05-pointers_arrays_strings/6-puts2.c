#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @s: variable s
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
	return;
}
