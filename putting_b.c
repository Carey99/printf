#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
* putting_i - Printing binary
* @num: Number to be converted
* Return: Recturn printed value
*/
int putting_b(unsigned int n)
{
	int size = sizeof(unsigned int) * 8;
	int i;
	char binary[33];

	binary[size] = '\0';

	for (i = size - 1; i >= 0; i--)
	{
		binary[i] = (n & 1) ? '1' : '0';
		n >>= 1;
	}

	return (write(1, binary, size));
}
