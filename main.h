#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int print_string(const char *str);
int _printf(const char *format, ...);
int print_c(char c);
int print_percent(void);

#endif
