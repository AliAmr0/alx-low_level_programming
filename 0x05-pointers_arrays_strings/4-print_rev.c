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
	int i, count = 0;

	for (i = 0; *(s + i) != 0; i++)
		count++;

	for (i = count - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
