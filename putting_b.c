#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
* putting_b - Printing binary
* @n: Number to be converted
* Return: Recturn printed value
*/
int putting_b(unsigned int n)
{
	int i, b, f = 0, c = 0, a = 1;
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
	p = ((a << (32 - i)) & n);
	if (p >> (31 - i))
	{
	f = 1;
	}
	if (f)
	{
	b = p >> (31 - i);
	putchar(b + 48);
	c++;
	}
	}
	if (c == 0)
	{
	c++;
	putchar('0');
	}
	return (c);
}
