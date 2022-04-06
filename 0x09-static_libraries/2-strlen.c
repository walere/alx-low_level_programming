#include "main.h"
/**
 * _strlen - returns the length of a string array
 * @s: pointer to the string
 * Return: int
 */

int _strlen(char *s)
{
	int i;
	i = 0;

	while (*(s + i) != '\0')
	       i++;
	return (i);
}
