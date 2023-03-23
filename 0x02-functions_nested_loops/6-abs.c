#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @alx: the function parameter
 * Return: value of alx
 */
int _abs(int alx)
{
while (alx < 0)
alx = -(alx);
if (alx >= 0)
alx = alx;
return (alx);
}
