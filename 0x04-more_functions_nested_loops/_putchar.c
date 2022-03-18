#include <unistd.h>
/**
 * _putchar- writes the char c
 * @c: character to print
 *
 * Return: 1
 * on error, -1 is retured,
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
