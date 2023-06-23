#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter.
 * @str: input string
 *
 * Return: a pomter to the duplicated string on success & NULL if otherwise
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)

	dup[j] = str[j];

	return (dup);
}
