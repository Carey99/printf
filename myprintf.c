#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
* _printf - printf
* @format: arguments
* Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
	return (-1);
	}
	while (*format != '\0')
	{
	if (*format == '%')
		{
		count += functions_f(*(++format), ap);
		}
	else
		{
		count += write(1, format, 1);
		}
	++format;
	}
	return (count);
}
