#include "main.h"

/**
 * *_memset - This function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: the memory area to fill
 * @b: constant byte to fill the memory area
 * @n: the number of times to fill b
 *
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
