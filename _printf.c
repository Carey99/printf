#include "main.h"
#include "printfc.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* _printf - A typical printf
* @format: Format to be printed
* Return: -1 for error else length
*/

int _printf(const char *format, ...)
{
	func callme[] = {{"%c", printfc}, {"%s", printfs}, {"%%", printfpercent}};
	va_list num_args;
	int i = 0, j = 0, length = 0;

	va_start(num_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
	return (-1);
	}
Here:
	while (format[i] != '\0')
	{
	while (j < 3)
	{
	if (callme[j].id[0] == format[i] && callme[j].id[1] == format[i + 1])
	{
	if (callme[j].f)
	{
	length += callme[j].f(num_args);
	}
	else
	{
	putchar(format[i]);
	length++;
	}
	i += 2;
	goto Here;
	}
	j++;
	}
	putchar(format[i]);
	i++;
	length++;
	}
	va_end(num_args);
	return (length);
}
