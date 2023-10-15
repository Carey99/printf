#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct functions
	{
	char *id;
	int (*f)();
	} func;
int _printf(const char *format, ...);
int printfc(va_list num);
int printfs(va_list num);
int printfpercent(void);

#endif
