#include <stdio.h>

/**
 * main - This program prints the alphabet
 * in lowercase except q and e
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
