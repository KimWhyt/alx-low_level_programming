#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints name of file
 * @argc: Second parameter counts the arguments
 * @argv: Third parameter is an array of strings
 * that contains the  actual arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return	(1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
