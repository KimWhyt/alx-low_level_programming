#include <unistd.h>

/**
 * This my _putchac.c
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
} 
