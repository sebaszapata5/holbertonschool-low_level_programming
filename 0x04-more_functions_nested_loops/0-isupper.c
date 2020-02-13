#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: if and else if of a function
 * Return: Always 0.
 */
int _isupper(int c)

{
	int result;

	if ((c >= 'A') && (c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
