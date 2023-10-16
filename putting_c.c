#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* putting_c - Prints character
* @c: Charcter type
* Return: Just print char
*/

int putting_c(int c)
{
	return (write(1, &c, 1));
}
