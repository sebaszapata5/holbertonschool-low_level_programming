#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *string = "Holberton\n";
short i = 0;
while (string[i]!= '\0')
{
_putchar(string[i]);
i++;
}
return (0);
}
