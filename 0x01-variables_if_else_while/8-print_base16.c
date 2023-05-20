#include <stdio.h>

/**
 * main -  The program prints all the
 * numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9';)
	{
		putchar(a);
		a++;
	}
	for (a = 'a'; a <= 'f';)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
