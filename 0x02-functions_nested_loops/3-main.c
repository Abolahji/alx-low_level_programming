#include "main.h"
/**
 * main - check the code.
 * _islower: a function that checks for lowercase character.
 * _putchar: works like the standard library putchar
 * Return: Always 0.
 */
int main(void)
{
int r;
     
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
