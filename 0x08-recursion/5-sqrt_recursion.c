#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: number to evaluate
 * @i: number to iterate
 * Return: sqrt of n
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, (i + 1)));
	}
}
/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: number to evaluate
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
