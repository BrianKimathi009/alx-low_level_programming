#include <stdio.h>

/**
 * main - This program prints all possible different
 * combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if (a < b && b < c && a != b && b != c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a + b + c != 24)
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

