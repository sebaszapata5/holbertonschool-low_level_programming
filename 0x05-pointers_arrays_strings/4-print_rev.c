#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: variable s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	short i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	i--;
	while (i != -1)
	{
	_putchar(s[i]);
	i--;
	}
	_putchar('\n');
}
