#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @s: variable s
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
       	while (s[i] - 1 != '\0')
       	{
       		i --;
       	}
}
