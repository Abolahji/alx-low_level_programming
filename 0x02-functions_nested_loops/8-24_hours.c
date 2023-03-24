#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
int jack;
int bauer;
jack = 0;
for (jack = 0 ; jack < 24 ; jack++)
{
for (bauer = 0 ; bauer < 60 ; bauer++)
{
_putchar(jack / 10 + '0');
_putchar(jack % 10 + '0');
_putchar(':');
_putchar(bauer / 10 + '0');
_putchar(bauer % 10 + '0');
_putchar('\n');
}
}
}
