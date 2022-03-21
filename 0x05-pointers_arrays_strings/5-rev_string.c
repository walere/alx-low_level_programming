#include "main.h"
/**
 * rev_string - prints a string in reverse order
 * @s: string inputed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int sub = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (sub < 1)
	{
		ltemp = s[i];
		s[i] = s[sub];
		s[sub] = ltemp;
		sub++;
		i--;
	}
}
