#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - still void
 *
 * Return: still zero
 */
int main(void)
{
int n;
int abolahji;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
abolahji = n % 10;
if (abolahji > 5)
printf("last digit of %d is %d and is greater than 5", n, abolahji);
if (abolahji == 0)
printf("last digit of %d is %d and is 0", n, abolahji);
if (abolahji < 6 && abolahji != 0)
printf("last digit of %d is %d and is less than 6 and not 0", n, abolahji);
printf("\n");
return (0);
}

