#include "main.h"

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers
 *
 * @width: width
 * @height: height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int freenum;
	int x;
	int y;
	int i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int *) * width);
			if (arr[i] == NULL)
			{
				for (freenum = 0; freenum < i; freenum++)
				{
					free(arr[freenum]);
				}
				free(arr);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
			{
				arr[x][y] = 0;
			}
		}
		return (arr);
}
