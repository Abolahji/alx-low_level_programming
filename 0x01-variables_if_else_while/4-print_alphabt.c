#include <stdio.h>
/**
 * main - this function was specifically asked for
 *
 * Return: zero
 */
int main(void)
{
char alx;
for (alx = 'a' ; alx <= 'z' ; alx++)
if (alx != 'e' && alx != 'q')
putchar(alx);
putchar('\n');
return (0);
}
