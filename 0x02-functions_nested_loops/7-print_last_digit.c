#include "main.h"
/**
 * print_last_digit - the function
 * @nested: the parameter
 * Return: the value of the last digit
 */
int print_last_digit(int nested)
{
int loop;
loop = nested % 10;
if (nested < 0)
loop = -loop;
_putchar(loop);
return (loop);
}

