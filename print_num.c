#include "main.h"

/**
 * print_num  - a function that prints integers.
 *
 * @num: the number to be printed.
 * @count: the number of chars printed.
 * Return: the number of digits printed.
 */
int print_num(long int num, int count)
{
	if (num < 0)
	{
		print_char('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = print_num(num / 10, count);
	}
	print_char(num % 10 + '0');
	return (count + 1);
}
