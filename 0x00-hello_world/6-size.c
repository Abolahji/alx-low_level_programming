#include <stdio.h>
/**
 * main - my main is void here
 *
 * Return: it is zero here
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)\n",  sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
