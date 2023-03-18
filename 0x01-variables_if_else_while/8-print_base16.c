#include <stdio.h>
/**
 * main - starting point
 *
 * Return: zero
 */
int main(void)
{
int alx;
char course;
for (alx = 0 ; alx < 10 ; alx++)
putchar(alx + '0');
for (course = 'a' ; course <= 'f' ; course++)
putchar(course);
putchar('\n');
return (0);
}
