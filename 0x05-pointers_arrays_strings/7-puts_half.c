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
	int i, count = 0, n = 0;

	for (i = 0; *(str + i) != 0; i++)
		count++;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2 + 1;

	for (i = n; *(str + i) != 0; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
