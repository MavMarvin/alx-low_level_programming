#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;
	if (*s == '\0')
		;
	else
	{
		for (i--; i >= 0; i--)
			_putchar(s[i]);
	}
}
