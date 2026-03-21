#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * Functions
 */

int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *str);
int print_format(char specifier, va_list ap);
int print_digits(int n);

#endif
