# _printf

Holberton School project for custom printf function

## Requirements

- Ubuntu 20.04 LTS
- gcc full error compiler
- Betty coding standards

### GitHub

- holbertonschool_printf

### Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Files

- _printf.c
- main.h
- print_format.c
- man_3_printf

## Compilation

Use the following compiler flags:
- gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Example

- _printf("%d", 123) Expected Output - "123"
- _printf("%c", 'H') Expected Output - "H"
- _printf("%s", "Holberton") Expected Output - "Holberton"

## Question

What happens when _printf("hello %s\n", "world", 1, 2, 3, 4);
- *Answer*: It will print "hello world" and a new line, and ignore the extra arguments 1, 2, 3, 4.

## Authors
- Shirleen Asre
- Trevor Huynh

