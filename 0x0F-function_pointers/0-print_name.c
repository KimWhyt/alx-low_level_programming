#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to add
 * @f:a pointer to function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

