#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s: the input string
 * @accept: the string to match
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
