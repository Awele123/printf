#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_dec -function that prints an integer
 * @num: parameter to be printed
 */

void print_dec(int num)
{
	if (num/10 < 0)
	{
		write(1, &num, 1);
	}
	else if (num/10 > 0)
	{
		write(1, &num, 1);
	}
}
