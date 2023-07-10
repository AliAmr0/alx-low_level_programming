#include "main.h"

/**
 * create_array-> a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size is an unsigend int parameter
 * @c: c is a char argument
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
