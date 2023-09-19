#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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
				write(1, format, 1);
			}
			else if (*format == 'c')
			{
				char c = _partwel(va_arg(args, int));

				char_count += print_char(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				char_count += print_string(str);
			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
