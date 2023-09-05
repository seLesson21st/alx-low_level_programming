#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 *  a 2 dimensional array of integers
 *  @width: The width of the array
 *  @height: The height of the array
 *  Return The 2 dimensional array, NULL if faiure
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	str = malloc(sizeof(int *) * height);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		str[x] = malloc(sizeof(int) * width);
		if (str[x] == NULL)
		{
			for (; x >= 0; x--)
				free(str[x]);
			free(str);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			str[x][y] = 0;
	}
	return (str);
}
