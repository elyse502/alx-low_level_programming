#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: width value
 * @height: height value
 *
 * Return: Always a pointer when Done
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(**array) * width);
			if (array[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
					free(array[i]);
				free(array);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}
