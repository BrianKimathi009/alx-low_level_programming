#include "main.h"
#include <stddef.h>

/**
 * *_strchr - This function locates a character in a string
 * @s: the string to check for character
 * @c: the character to search
 *
 * Return: a pointer to the matched character or
 * NULL if  the  character  is not  found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
