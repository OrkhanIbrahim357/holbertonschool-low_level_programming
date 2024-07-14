#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - main
 * @width: var1
 * @height: var2
 *
 * Return: 2dArray
 */
int **alloc_grid(int width, int height)
{
	int **arrarr;
	int row;
	int column;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrarr = malloc(sizeof(int *) * height);

	if (arrarr == NULL)
		return (NULL);

	for (column = 0; column < height; column++)
	{
		arrarr[column] = malloc(sizeof(int) * width);

		if (arrarr[column] == NULL)
		{
			for (; column >= 0; column--)
				free(arrarr[column]);

			free(arrarr);
			return (NULL);
		}
	}

	for (column = 0; column < height ;  column++)
	{
		for (row = 0; row < width; row++)
			arrarr[column][row] = 0;
	}

	return (arrarr);
}
