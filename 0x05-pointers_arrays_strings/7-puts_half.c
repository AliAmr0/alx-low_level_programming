#include "main.h"

/**
 * puts_half->  a function that prints half of a string
 *
 * @str: str is a pointer to string parameter
 *
 * Return: void (no return)
 */

void puts_half(char *str)
{
	int i, count = 0, n;

	for (i = 0; *(str + i) != 0; i++)
		count++;

	if (count % 2 == 0)
		n = count;
	else
		n = (count - 1) / 2;

	for (i = n; *(str + i) != 0; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
