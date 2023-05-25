#include "main.h"

/**
 * _islower - This function checks for lowercase character.
 * @c: This is the character to be checked
 *
 * Return: 1 if c is lowercase & 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
