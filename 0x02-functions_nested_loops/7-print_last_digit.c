#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 * @n: number to be checked
 * Return: the last digit's value
 */
int print_last_digit(int n)
{
	int ld;

	ld = (n % 10);
	if (n < 0)
		ld = -ld;
	{
		_putchar(ld + '0');
	}
	return (ld);
}
