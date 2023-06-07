#include "main.h"
#include <stddef.h>

/**
  * _strstr - This function locates a substring.
  * @haystack: the string to evaluate
  * @needle:the substring to match
  *
  * Return: a pointer to the beginning of the located substring,
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
