#include "main.h"
/**
 *  _islower - my function
 *  @c: is an argument or a parameter
 *  Return: zero when c is not in lowercase
 */
int _islower(int c)
{
while (c > 96 && c <= 122)
{
while (c <= 96 && c > 122)
return (0);
}
return (1);
}
