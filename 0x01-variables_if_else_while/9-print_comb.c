#include <stdio.h>
int main(void)
{
int num;
for (num = '0' ; num <= '9' ; num++)
{
putchar (num);
if (num <= '8')
{
putchar (32);
putchar (44);
}
}
putchar ('\n');
return (0);
}
