#include <stdio.h>

/**
 * main - This program prints all possible
 * different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b && a != b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

