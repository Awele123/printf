#include "main.h"

/**
 * print_bin - a function that prints binary numbers.
 * @num: the number to be printed in binary.
 * @count: an integer to count printed digits.
 * Return: the number of digits printed.
 */
int print_bin(unsigned int num)
{
	int bin;
	
	if (num > 0 )
	{
		bin = num % 2;
		num /= 2;
	}
	write (1, &bin, 1);

	return (0);
}
