#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * _printf - a function used for formated output.
 *
 * @format: the format string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int char_count = 0;

	va_list(args);
	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				char_count += print_char('%');
			}
			else if (*format == 'c')
			{
				char_count += print_char(va_arg(args, int));
			}
			else if (*format == 's')
			{
				char_count += print_string(va_arg(args, char *));
			}
			else if (*format == 'd' || *format == 'i')
			{
				char_count += print_num(va_arg(args, int), 0);
			}
			else if (*format == 'b')
			{
				char_count += print_bin(va_arg(args, unsigned int), 0);
			}
		}
		else
		{
			char_count += print_char(*format);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
