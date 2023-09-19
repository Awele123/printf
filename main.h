#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int print_string(const char *str);
int print_char(const char c);
int print_percent(void);
int _printf(const char *format, ...);

#endif
