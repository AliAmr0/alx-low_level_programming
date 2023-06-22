#include "main.h"

/**
 * print_most_numbers -> a function that prints the numbers, from 0 to 9
 * Do not print 2 and 4
 *
 * Return: void (no return)
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}