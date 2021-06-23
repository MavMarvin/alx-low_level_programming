#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	}
}
