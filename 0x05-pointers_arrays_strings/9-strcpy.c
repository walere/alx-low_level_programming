#include "main.h"
/**
 * _strcpy - funtion that copies string
 * @dest: pointer
 * @src: pointer to source code
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
