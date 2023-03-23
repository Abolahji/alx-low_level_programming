#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 * @n: an argument to the function
 * Returm: could be one, zero and -1
 */
int print_sign(int n)
{
while (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
