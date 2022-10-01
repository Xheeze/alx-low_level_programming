#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coun;
	(void)argv;

	for (coun = 0; coun <= argc; coun++)
	printf("%d\n", coun);

	return (0);
}
