#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _testf - Sample test
* @format: arguments
* Return: -1 not succesful else length
*/
int _testf(const char *format, ...)
{
	func callme[] = {{"%c", printfc}, {"%s", printfs}, {"%%", printfpercent}};
	va_list num_args;
	int i = 0, length = 0;

	va_start(num_args, format);
	if (format == NULL || format[0] == '\0')
		va_end(num_args);
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			int j;

			for (j = 0; j < 3; j++)
			{
				if (callme[j].id[1] == format[i + 1])
					{
					length += callme[j].f(num_args);
					i += 2;
					break;
					}
			}
			if (j == 3)
			{
				putchar(format[i]);
				length++;
				i++;
			}
		}
		else
			{
			putchar(format[i]);
			length++;
			i++;
			}
	}
	va_end(num_args);
	return (length);
}

