#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: 1 for success, -1 on error & errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
