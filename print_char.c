#include "main.h"

/**
 * print_char - a function that prints a char.
 * @c: a character to be printed.
 * Return: the number of characters printed to the std out.
 */
int print_char(const char c)
{
	write(1, &c, 1);
	return (1);
}
