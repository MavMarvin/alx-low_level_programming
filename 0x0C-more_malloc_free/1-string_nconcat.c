#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: input array 1
* @s2: input array 2
* @n: positions to copy
* Return: pointer to array
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size1 = 0, size2 = 0, i, j;

	if (s1 == NULL)
	{ s1 = ""; }
	if (s2 == NULL)
	{ s2 = ""; }
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));
	if (p == NULL)
	return (NULL);
	for (i = 0; i < (size1 + n) && s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; i < (size1 + n) && s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
return (p);
}
