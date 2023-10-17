#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* functions_f - These functions are being called
* @spec: Char dertemining what to be printed
* @ap: Argument pointer
* Return: Count, wht to be printed
*/

int functions_f(char spec, va_list ap)
{
	int count = 0;

	if (spec == 'c')
	{
	count += putting_c(va_arg(ap, int));
	}
	else if (spec == 's')
	{
	count += putting_s(va_arg(ap, char *));
	}
	else if (spec == '%')
	{
	count += write(1, "%", 1);
	}
	else if (spec == 'd' || spec == 'i')
	{
	count += putting_i((long)va_arg(ap, int), 10);
	}
	else if (spec == 'x')
	{
	count += putting_i((long)va_arg(ap, unsigned int), 16);
	}
	else if (spec == 'b')
	{
	count += putting_b(va_arg(ap, unsigned int));
	}
	else
	{
	count += write(1, &spec, 1);
	}
	return (count);
}
