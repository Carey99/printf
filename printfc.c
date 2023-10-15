#include "main.h"
#include "printfc.h"
#include <stdio.h>

/**
* printfc - Prints characters
* @num: Arguments number
* Return: 1 success
*/

int printfc(va_list num)
{
	char c = va_arg(num, int);

	putchar(c);
	return (1);
}
