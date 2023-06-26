#include "main.h"

/**
 * puts2-> a function to print every other character of a string
 *
 * @str: str is a pointer to string parameter
 *
 * Return: void (co return)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n')
}
