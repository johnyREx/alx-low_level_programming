#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -n program that multiplies two integers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (b = 1; b < argc; b++)
	{
		product *= atoi(argv[b]);
	}
	printf("%d\n", product);

	return (0);
}
