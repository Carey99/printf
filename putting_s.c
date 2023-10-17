#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* putting_s - Prints string
* @s: String being printed
* Return: Count number
*/

int putting_s(char *s)
{
	int c = 0;

	if (s == NULL)
	{
		c = putting_s("(null)");
		return (c);
	}
	while (*s != '\0')
	{
	putchar(*s);
	s++;
	c++;
	}
	return (c);
}
