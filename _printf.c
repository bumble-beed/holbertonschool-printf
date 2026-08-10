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
	i = 1;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i = -1;
		}
		else
		{
			i = 1;
		}
	i++;
	}

	va_end(position);

	return(0);
}