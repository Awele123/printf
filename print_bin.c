#include "main.h"

/**
 * print_bin - a function that prints binary numbers.
 * @num: the number to be printed in binary.
 * @count: an integer to count printed digits.
 * Return: the number of digits printed.
 */
int print_bin(unsigned int num)
{
	int l = 0;
	int bin = 0;
	int p = 1;

	while (num)
	{
		l = num % 2;
		num = num / 2;
		bin = bin + (l * p);
		p = p * 10;
	}
	write(1, &bin, 1);

	return (0);
}
