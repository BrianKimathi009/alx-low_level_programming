#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: \n if n <= 0
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
	if (a <= 0)
	{
		_putchar('\n');
	}
}
