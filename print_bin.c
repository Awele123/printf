#include "main.h"

/**
 * print_bin - a function that prints binary numbers.
 * @num: the number to be printed in binary.
 * @count: an integer to count printed digits.
 * Return: the number of digits printed.
 */
int print_bin(unsigned int num, int count)
{
	char buffer[32];
	int i;

	for (i = 31; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		buffer[count++] = bit + '0';
	}
	write (1, buffer, count);

	return (count);
}
