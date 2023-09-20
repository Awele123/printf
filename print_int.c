#include "main.h"

/**
 * print_int - a function that prints integers.
 *
 * @num: the number to be printed.
 * Return: 0 on success.
 */
int print_int(int num)
{
	if (num < 0)
	{
		write(1, &num, 1);
	}
	else if (num > 0)
	{
		write(1, &num, 1);
	}
	return (0);
}
