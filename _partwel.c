#include <unistd.h>

/**
 * _partwel - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _partwel(char c)
{
	return (write(1, &c, 1));
}
