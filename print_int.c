#include "main.h"

/**
 * print_int - a function that prints integers.
 *
 * @num: the number to be printed.
 * Return: 0 on success.
 */
int print_int(int num)
{
	if (num == NULL)
	{
		return (-1);
	}
	if (num != NULL)
	{
		write(1, &num, 1);
	}
	return (0);
}
