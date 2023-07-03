#include "main.h"

/**
 * _memset()-> a function that fills memory with a constant byte
 *
 * @s: s is a pointer to char parameter
 * @b: b is a char
 * @n: n is an unsigned int
 *
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
