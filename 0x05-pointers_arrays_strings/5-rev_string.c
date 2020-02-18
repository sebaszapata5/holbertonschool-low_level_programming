#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: variable s
 * Return: Always 0.
 */

/**
 * int _strlen(char *s)
 */
void rev_string(char *s)
{
	short i;
	short n;
	char r;

	while (s[i] != '\0')
	{
		i++;
	}
	for (n = i; n = 9 - 1; n--)
	r = s[n];
	s[n] = s[i];

}
