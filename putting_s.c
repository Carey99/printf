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
	int count = 0;

	if (s == NULL)
	{
	count += write(1, "(null)", 6);
	}
	else
	{
	int len = strlen(s);

	count += write(1, s, len);
	}
	return (count);
}
