#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* putting_i - Printing int and hex
* @num: Number
* @base: Base of num
* Return: return value
*/

int putting_i(long n, int base)
{
	int count;
	char symbol[] = "0123456789abcdef";

	if (n < 0)
	{
	write(1, "-", 1);
	return (putting_i(-n, base) + 1);
	}
	else if (n < base)
	{
	return putting_c(symbol[n]);
	}
	else
	{
	count = putting_i(n / base, base);
	return (count + putting_i(n % base, base));
	}
}
