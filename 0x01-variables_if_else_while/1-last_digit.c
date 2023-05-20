#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - This program prints the last digit of the number
 * stored in the variable n
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = n % 10;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,k);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n,k);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,k);
	}
	return (0);
}
