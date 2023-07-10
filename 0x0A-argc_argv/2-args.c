#include <stdio.h>

/**
 * main -prints name of file
 * @argc: Second parameter counts the arguments
 * @argv: Third parameter is an array of strings
 * that contains the  actual arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

	(void)argc;
	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
