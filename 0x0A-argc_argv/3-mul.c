#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry poit
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(success) 1(error)
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
