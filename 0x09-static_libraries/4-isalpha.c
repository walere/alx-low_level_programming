#include "main.h"
/**
 * _isalpha - function
 * @c: type int char
 * Return: 1 if letter,
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
