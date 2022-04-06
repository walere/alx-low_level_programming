#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string 1
 * @s2: string 2
 * Return: the diff
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int op = 0;
	
	while (op == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
