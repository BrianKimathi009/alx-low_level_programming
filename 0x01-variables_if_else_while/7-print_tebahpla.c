#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a';)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

