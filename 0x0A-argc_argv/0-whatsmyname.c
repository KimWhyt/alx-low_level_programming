#include <stdio.h>

/**
 * main -prints name of file
 * @argc: First parameter counts the arguments
 * @argv: Second parameter is an array of strings
 * that contains the  actual arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
