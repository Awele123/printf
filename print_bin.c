#include "main.h"

/**
 * print_bin - a function that prints binary numbers.
 * @num: the number to be printed in binary.
 * @count: an integer to count printed digits.
 * Return: the number of digits printed.
 */
int print_bin(unsigned int num)
{
	char buffer[32];
	int i = num;

	for (i = 0; i >= 0; i++)
	{
		buffer[i] = num % 2;
		num = num / 2;
	}
	return (buffer[i]);

	for (i = i; i >= 0; i--)
	{
		write (1, &buffer, 1);
	}
	return (buffer[i]);
}
