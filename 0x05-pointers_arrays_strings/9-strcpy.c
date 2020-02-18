#include "holberton.h"
/**
 * strcpy - check the code for Holberton School students.
 * @dest: variable
 * @src: variable
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
