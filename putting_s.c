#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
* putting_s - Prints string
* @s: string
* Return: Length of the string
*/

int putting_s(char *s)
{
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
