#include "main.h"
#include <string.h>

/**
 * rev_string -  This function reverses a string
 * @s: string to reverse
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	int l;
	char c;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
