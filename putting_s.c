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

	while (*s != '\0')
	{
	putting_c((int)*s);
	++count;
	++s;
	}
	return (count);
}
