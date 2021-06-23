#include "holberton.h"

/**
 * print_sign - Checks for sign of numbers
 * @c: The character in ASCII code
 * Return: Different values
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
        	return (1);
        else if (n == 0)
        	_putchar('0');
        	return (0);
    	else if (n < 0)
    		_putchar('-');
        	return (-1);
    	_putchar('\n');
}
