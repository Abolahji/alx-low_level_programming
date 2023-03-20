# include<stdio.h>
/**
 * main - for my function
 *
 * Return: zero
 */
int main(void)
{
int cis;
int really;
int fun;
for (cis = 0 ; cis < 10 ; cis++)
{
for (really = 1 ; really < 10 ; really++)
{
for (fun = 2 ; fun < 10 ; fun++)
{
if (cis < really && cis < fun && cis != really && cis != fun
&& really < fun && really != fun)
{
putchar(cis + '0');
putchar(really + '0');
putchar(fun + '0');
if (cis + really + fun < 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
