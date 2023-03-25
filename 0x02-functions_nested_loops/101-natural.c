#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
int one;
int zero;

zero = 0;

for (one = 0 ; one < 1024 ; one++)
{
if ((one % 3 == 0) || (one % 5 == 0))
{
zero = zero + one;
}
}
printf("%d\n", zero);
return (0);
}
