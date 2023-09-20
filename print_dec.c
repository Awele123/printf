#include "main.h"
/**
 * print_dec -function that prints an decimal.
 *
 * @num: parameter to be printed
 * Return: 0 on success.
 */

int print_dec(int num)
{
	if (num/10 < 0)
	{
		write(1, &num, 1);
	}
	else if (num/10 > 0)
	{
		write(1, &num, 1);
	}
	return (0);
}
