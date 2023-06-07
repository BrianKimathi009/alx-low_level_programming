#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: the string to be evaluated
 * @accept: string that holds the characters to be matched
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				len++;
				break;
			}
		}
		if (accept[k] == '\0')
		{
			break;
		}
	}
	return (len);
}
