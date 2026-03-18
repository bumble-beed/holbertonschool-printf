#include "main.h"

/**
 * print_char - Print a char and return 1
 * @c: char to print
 *
 * Return: 1
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - print the string given
 * @str: string to print
 *
 * Return: Amount of char from str written
 */

int print_str(char *str)
{
	int count;

	count = 0;
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}

/**
 * print_format - calls the corresponding print_(format) function to print
 * @specifier: char to sepcify what the format to be printed is
 * @ap: the input needed to be printed
 *
 * Return: Length of printed
 */

int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	switch (specifier)
	{
	case 'c':
		count += print_char(va_arg(ap, int));
		break;
	case 's':
		count += print_str(va_arg(ap, char *));
		break;
	case '%':
		count += print_char('%');
		break;
	case '\0':
		return (count);
	default:
		count += print_char('%');
		count += write(1, &specifier, 1);
	}
	return (count);
}
