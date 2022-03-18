#include "main.h"
/**
 *_isupper - checks if the character is in uppercase
 *@c: this is the variable
 *Return: int.
 *otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
