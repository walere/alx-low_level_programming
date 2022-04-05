#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str;
	unsigned int size, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[i] != '\0'; size++);

	ptr = (char *)malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		*(ptr + j) = str[j];
	}
	return (ptr);
}
