#include "coding.h"
#include <stdlib.h>

/**
 * **alloc_grid - function with two arguments
 * @width: input width
 * @height: input height
 *
 * Description: returns a pointer to a 2d array of integers
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		{
			if (arr[i] == '\0')
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}
	return (arr);
}
