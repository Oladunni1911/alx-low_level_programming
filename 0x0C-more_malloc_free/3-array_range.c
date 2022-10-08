#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: starting integer
 * @max: ending integer
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i, j, diff;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	p = malloc(sizeof(min) * diff);

	if (p != NULL)
	{
		for (i = min, j = 0; i <= max; i++, j++)
			p[j] = i;
	}

	else
		return (NULL);
	return (p);
}
