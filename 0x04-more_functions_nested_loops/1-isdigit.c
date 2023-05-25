#include "main.h"

/**
 * _isdigit - This function checks for a digit (0 through 9)
 * @c: character to check from
 *
 *Return: 1 if c is a digit & 0 if not
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
