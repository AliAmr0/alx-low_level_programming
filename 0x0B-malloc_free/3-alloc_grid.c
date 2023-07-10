#include "main.h"

/**
 * alloc_grid-> a function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: width is an int argument
 * @height: height is an int argument
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == 0)
	{
		return (NULL);
		free(arr);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
