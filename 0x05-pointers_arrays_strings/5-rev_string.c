#include "main.h"

/**
 * rev_string-> a function to reverse string
 *
 * @s: s is a pointer to string
 *
 * Return: void (no return)
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp;

	for (i = 0; *(s + i) != 0; i++)
		count++;

	for (i = 0; i < count / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (count - i - 1));
		*(s + (count - i - 1)) = temp;
	}
}
