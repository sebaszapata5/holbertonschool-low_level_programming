#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int p;
srand(time(0));
n = rand() - RAND_MAX / 2;
p = n % 10;
printf("is ");
if (n == 0)
{
printf("%d %s", p, "and is 0\n");
}
else if (n > 5)
{
printf("%d %s", p, "and is greater than 5\n");
}
else if (n < 6)
{
printf("%d %s", p, "and is less than 6 and not 0\n");
}
return (0);
}
