#include <stdio.h>

/**
 * main -This program prints the alphabet in lowercase
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
	putchar('\n');
	return (0);
}
