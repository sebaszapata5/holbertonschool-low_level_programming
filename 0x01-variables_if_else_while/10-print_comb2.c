#include <stdio.h>
int main(void)
{
int num;
int dec;
for (dec = '0' ; dec <= '9' ; dec++)
for (num = '0' ; num <= '9' ; num++)
{
putchar (dec);
putchar (num);
if (dec <= '9' && num <= '9')
{
putchar (32);
putchar (44);
}
}
putchar ('\n');
return (0);
}
