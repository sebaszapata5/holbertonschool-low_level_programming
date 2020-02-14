#include "holberton.h"
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 * @n: _putchar
 * Return: Always 0.
 */
void print_number(int n)
{
        int tam;
        int lon;

        tam = 1;
        while (tam <= 100000000)
        {
                if ((n / tam) != 0)
                {
                        lon = tam;
                }
                tam = (tam * 10);
                printf ("%d \n" , lon);
        }
        while (lon >= 10)
        {
                _putchar('0' + (n / lon));
                lon = (lon / 10);
        }
        _putchar('0' + (n % 10));

}
