#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - Typical printf
* @format: Args num
* Return: Count success
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
			format++;
			if (*format == '\0')
			{
				return (-1);
			}
			while (*format == ' ')
				format++;
			count += functions_f(*format, ap);
			format++;
		}
		else
		{
			count += putchar(*format);
			format++;
		}
	}

	va_end(ap);
	return (count);
}
