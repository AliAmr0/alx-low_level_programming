#include "main.h"

/**
 * swap_int-> a method to swap values of 2 integer
 *
 * @a: a is a pointer to integer parameter
 * @b: b is a pointer to integer parameter
 *
 * Return: void (no return)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
