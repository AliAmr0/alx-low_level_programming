#include "main.h"

/**
 * print_rev-> a function to print string in reverse order
 *
 * @s: s is a pointer to string parameter
 *
 * Return: void (no return)
 */

void print_rev(char *s)
{
	int i;

	for (i = -1; *(s + i) != 0; i--)
	{
		_putchar(*(s + i));
	}
}
