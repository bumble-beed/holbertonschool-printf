#include "main.h"

/**
 * print_char - prints a character
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);

	return (1);
}

/**
 * print_string - prints a string
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int i, count;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}

	return (count);
}

/**
 * print_percent - prints a percent sign
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);

	return (1);
}
/**
 * print_int - prints an integer, including negatives
 * @n: the integer to print
 *
 * Return: number of characters printed
 */
int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		if (n == -2147483648)
		{
			count += print_int(214748364);
			write(1, "8", 1);
			count++;
			return (count);
		}
		n = -n;
	}
	if (n >= 10)
		count += print_int(n / 10);
	write(1, &"0123456789"[n % 10], 1);
	count++;
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	i = 0;
	count = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				count = -1;
				break;
			}
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == '%')
				count += print_percent(args);
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(args, int));
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		i++;
	}

	va_end(args);

	return (count);
}
