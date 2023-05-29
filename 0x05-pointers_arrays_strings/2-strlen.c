#include "main.h"
#include <stdio.h>

/**
 * _strlen - This function returns the length of a string.
 * @s: the string to be measured
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return(a);
}
