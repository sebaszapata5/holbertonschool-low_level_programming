#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: variable s
 * Return: Always 0.
 */

int _strlen(char *s)

{
	short i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
