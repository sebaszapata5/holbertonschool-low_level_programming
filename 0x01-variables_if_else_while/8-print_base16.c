#include <stdio.h>
int main(void)
{
int num;
for (num = 0 ; num <= 15 ; num++)
{
if (num <= 9)
putchar (num + 48);
else
putchar (num + 87);
}
putchar ('\n');
return (0);
}
