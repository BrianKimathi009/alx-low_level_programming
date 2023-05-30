#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints n elements of an
 *array of integers, followed by a new line.
 * @a: array to print
 * @n: the no. of elements of the array to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == 0)
		{
			printf("%d", a[b]);
		}
		else
		{
			printf(", %d", a[b]);
		}
	}
	printf("\n");
}
