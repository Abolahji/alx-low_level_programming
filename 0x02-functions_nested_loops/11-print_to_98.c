#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all natural numbers from n to 98
 * @n: the parameter
 * Return: zero
 */
void print_to_98(int n)
{
int nose;
if (n >= 0 || n <= 98)
{
for (nose = n ; nose <= 98 ; nose++)
{
printf("%d", nose);
if (nose != 98)
printf(", ");
}
printf("\n");
}
else if (n < 0)
{
for (nose = n ; nose <= 98 ; nose++)
{
printf("%d", nose);
if (nose != 98)
printf(", ");
}
printf("\n ");
}
else if (n > 98)
{
for (nose = n ; nose >= 98 ; nose--)
{
printf("%d", nose);
if (nose != 98)
printf(", ");
}
printf("\n");
}
else if (n == 98)
printf("%d", n);
}
