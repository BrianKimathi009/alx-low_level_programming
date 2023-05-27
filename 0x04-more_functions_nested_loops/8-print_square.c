
#include "main.h"

/**
 * print_square - This function prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: \n if size is 0
 */
void print_square(int size)
{
	int a;
	int b;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
