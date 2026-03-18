#include "main.h"

/**
 * _printf - Prints format with potential arguments specified by ...
 * @format: String to print with potential extra arguments
 * @...: Format of arguments to print
 *
 * Return: length of string printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(++format) != '\0')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
