#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	//Find the string length where s[i] is end of string
	for (i = 0; s[i] != '\0'; i++)
		l = i;

	//swap the values
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
