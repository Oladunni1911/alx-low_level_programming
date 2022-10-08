#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsiged integer array
 * @size: unsigned integer size of memory
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < nmemb; i++)
		p[i] = 0;
	}

	return (p);
}
