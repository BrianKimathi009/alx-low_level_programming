#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" fizz");
		}
		else if (a % 3 != 0 && a % 5 == 0)
		{
			printf(" buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");
	return (0);
}
