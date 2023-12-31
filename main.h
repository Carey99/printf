#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
/**
* struct functions - format holder
* @id: format specifier
* @f: Function pointer
*/
typedef struct functions
	{
	char *id;
	int (*f)();
	} func;
int _printf(const char *format, ...);
int putting_i(long n, int base);
int putting_c(int c);
int putting_s(char *s);
int _testf(const char *format, ...);
int printfc(va_list num);
int putting_b(unsigned int n);
int printfs(va_list num);
int printfpercent(void);
int functions_f(char spec, va_list ap);

#endif
