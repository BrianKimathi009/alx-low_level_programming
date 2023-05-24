#include "main.h"

/**
 * print_alphabet_x10 -  This function prints 10 times
 * the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 'a';
		while (b < 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
