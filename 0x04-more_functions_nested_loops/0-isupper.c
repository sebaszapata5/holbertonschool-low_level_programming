#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: if and else if of a function
 * Return: Always 0.
 */
int _isupper(int c)

{
	int result;

	if ((c >= 65) && (c <= 90))
		{
		result = 1;
		}
	else if ((c >= 97) && (c <= 122))
		{
		result = 0;
		}
	return (result);
}
