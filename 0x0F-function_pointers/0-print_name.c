#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string to add
 * @f:a pointer to function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return 0;

	f(name);
}

