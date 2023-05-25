#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter & 0 if its not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
