#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
