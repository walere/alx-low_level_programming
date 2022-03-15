#include "main.h"
/**
 * main- checks if an alphabet is
 * in lowercase and if its capital
 *
 * Return: return true (1) for capital
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
