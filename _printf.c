#include "main.h"

/**
* _printf - Read format and product output
*
* Return: anything
*/

int _printf(const char *format, ...)
{
	va_list position;
	int i;

	va_start(position, format);
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		}
		else
		{
			write(STDOUT_FILENO, &format[i], 1);
		}
	i++;
	}

	va_end(position);

	return(0);
}