#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: the function's parameter
 * Return: if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
if ((c > 96 && c <= 122) || (c > 64 && c <= 90))
return (1);
else
return (0);
}
