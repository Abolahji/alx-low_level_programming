#include "main.h"
/**
 * print_alphabet_x10 - this is my function
 *
 * Return: zero
 */
void print_alphabet_x10(void)
{
int alphabet;
for (alphabet = 1 ; alphabet <= 10 ; alphabet++)
{
char x_10;
for (x_10 = 'a' ; x_10 <= 'z' ; x_10++)
_putchar(x_10);
_putchar('\n');
}
}
