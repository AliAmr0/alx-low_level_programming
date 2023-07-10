#include "main.h"

/**
 * _strdup-> a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: str is a pointer to char parameter
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *cp;
	int i;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	cp = malloc(sizeof(char) * (i + 1));

	if (cp == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	return (cp);
}
