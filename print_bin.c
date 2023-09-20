#include "main.h"

/**
 * print_bin - a function that prints binary numbers.
 * @num: the number to be printed in binary.
 * @count: an integer to count printed digits.
 * Return: the number of digits printed.
 */
int print_bin(unsigned int num)
{
	char buffer[36];
	int b;

	for (b = 0; num > 0; b++)
	{
		buffer[b] = num % 2;
		num = num /2;
	}
	write (1, &buffer[b], 1);
	return (0);
}
