#include "main.h"
#include <stddef.h>

/**
 * _strpbrk-> a function that searches a string for any of a set of bytes
 *
 * @s: s is a pointer to char parameter
 * @accept: accept is a pointer to char parameter
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
