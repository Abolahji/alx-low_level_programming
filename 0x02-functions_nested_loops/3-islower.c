#include "main.h"
/**
 *  _islower - my function
 *  @c: is an argument or a parameter
 *  Return: zero when c is not in lowercase
 */
int _islower(int c)
{
if (c > 96 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
