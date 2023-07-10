#include "main.h"

/**
 * str_concat-> a function that concatenates two strings
 *
 * @s1: s1 is a pointer to char parameter
 * @s2: s2 is a pointer to char parameter
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *cn;
	int i, j, k;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	cn = malloc(sizeof(char) * (i + j + 1));

	if (cn == 0)
		return (NULL);

	for (k = 0; k < i; k++)
		cn[k] = s1[k];
	for (i = 0; i < j; k++, i++)
		cn[k] = s2[i];
	return (cn);
}
