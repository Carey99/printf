#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* functions_f - These functions are being called
* @spec: Cahr dermining what to be printed
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
	else
	{
	write(1, &spec, 1);
	count += 2;
	}
	return (count);
}
