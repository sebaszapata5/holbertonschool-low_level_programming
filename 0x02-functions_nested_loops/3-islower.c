#include "holberton.h"
/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
c = 1;
}
else
{
c = 0;
}
return (1 & c);
}
