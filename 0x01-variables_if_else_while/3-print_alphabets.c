#include <stdio.h>

/**
 * main - This program prints the alphabet
 * in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z';)
	{
		putchar(a);
		a++;
	}
	for (a = 'A'; a <= 'Z';)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
