#include <stdio.h>

/**
 * main - This program prints the size of various types on
 * the computer it is compiled and run on.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", sizeof());
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", sizeof(m));
	return (0);
}
