#include "main.h"

/**
 * print_diagonal - This function draws a diagonal line on the terminal
 * @n: number of times character \ will be printed
 *
 * Return: \n if n >= 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 1; a <= n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
