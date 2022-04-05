#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: storage of c
 * Return: pointer to location
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptrc;

	if (size == 0)
	{
		return (NULL);
	}

	ptrc = malloc(sizeof(c) * size);

	if (ptrc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(ptrc + i) = c;

	return (ptrc);
}

