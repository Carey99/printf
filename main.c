#include <stdio.h>
#include <unistd.h>
#include "printfc.h"
#include "main.h"
#include <limits.h>

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int ret = _printf("What?");

	_printf("\n%d\n", ret);
	ret = _printf("What%s", "The?");
	_printf("\n%d\n", ret);
	ret = _printf("What%The");
	_printf("\n%d\n", ret);
	ret = _printf("What%s", NULL);
	_printf("\n%d\n", ret);

	ret = _printf("What%d");
	_printf("\n%d\n", ret);
	ret = _printf("What%");
	_printf("\n%d\n", ret);
	ret = _printf("What%c", "The");
	_printf("\n%d\n", ret);
	ret = _printf("What%s", 'T');
	_printf("\n%d\n", ret);
	return (0);
}
