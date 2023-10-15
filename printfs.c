#include "main.h"
#include "printfc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
* printfs - Prints string
* @num: Number of argument
* Return: Length of the string
*/

int printfs(va_list num)
{
	char *s = va_arg(num, char *);
	int i, length;

	if (s == NULL)
	{
	s = "(null)";
	length = strlen(s);
	for (i = 0; i < length; i++)
	putchar(s[i]);
	return (length);
	}
	else
	{
	length = strlen(s);
	for (i = 0; i < length; i++)
	putchar(s[i]);
	return (length);
	}
}
