#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *putchar proyect
 * Return: Always 0.
 */
int main(void)
{
char *string = "Holberton";
short i = 0;
while (string[i] != '\0')
{
_putchar(string[i]);
i++;
}
_putchar('\n');
return (0);
}
