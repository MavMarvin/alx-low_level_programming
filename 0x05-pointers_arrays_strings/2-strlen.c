#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: string.
 * Return: length of string
 */
int _strlen(char *s)
{
	while( *s != '\0' )
	{
		count++;
		s++;
	}
	return count;
}
