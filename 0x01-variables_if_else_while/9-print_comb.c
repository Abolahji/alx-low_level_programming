#include <stdio.h>
/**
 * main - this is my function
 *
 * Return: zero
 */
int main(void)
{
int v;
for (v = 0 ; v < 10 ; v++)
{
putchar(v + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
