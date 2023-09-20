#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int print_num(long int num, int count);
int print_string(const char *str);
int print_char(const char c);
int _printf(const char *format, ...);

#endif
