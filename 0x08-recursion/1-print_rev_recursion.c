#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 *@s:the sting to print
 *
 * returns: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_putchar(*s);
	_print_rev_recursion(s);
}
