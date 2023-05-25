#include "main.h"

/**
 * _isupper -This  function checks for uppercase character.
 *@c: character to be searched
 *
 *Return: 1 if c is upper and 0 if its not
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
