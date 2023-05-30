#include "main.h"
#include <string.h>

/**
 * print_rev - This function prints a string, in reverse followed by a new line
 * @s: pointer to the string to reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
