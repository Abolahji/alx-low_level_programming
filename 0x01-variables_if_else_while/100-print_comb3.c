#include <stdio.h>
/**
 * main - my function
 *
 * Return: zero
 */
int main(void)
{
int alx;
int blx;
for (alx = 0 ; alx < 10 ; alx++)
{
for (blx = 0 ; blx < 10 ; blx++)
{
if (alx != blx && alx < blx)
{
putchar(alx + '0');
putchar(blx + '0');
{
if (alx + blx != 17)
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
