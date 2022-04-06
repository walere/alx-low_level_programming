#include <unistd.h>
/**
 * _putchar - writes to stdout
 * @c : char
 * Return: ret value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
