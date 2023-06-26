#include "main.h"

/**
 * _strlen-> a method to calculate the length of string
 *
 * @s: s is a pointer to char parameter
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		count++;
	}
	return (count);
}
