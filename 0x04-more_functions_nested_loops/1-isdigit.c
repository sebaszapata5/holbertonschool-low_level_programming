#include "holberton.h"

/**
 * _isdigit - check the isdigit case.
 * @c: if and else if of a function with isdigit
 * Return: Always 0.
 */
int _isdigit(int c)

{
	int result;

	if ((c >= '0') && (c <= '9'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
