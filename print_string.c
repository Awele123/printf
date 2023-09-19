/**
 * print_string - a function that prints a string.
 * @str: a pointer to a string.
 * Return: the number of characters printed to the std out.
 */
int print_string(const char *str)
{
	int str_count = 0;
	
	while (*str)
	{
		write(1, str, 1);
		str++;
		str_count++;
	}
	return (str_count);
}
