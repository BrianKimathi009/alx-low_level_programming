#include "main.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: a pointer to a value
 * @b: a pointer to a value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
