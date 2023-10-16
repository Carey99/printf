#include <stdio.h>
#include "main.h"
 
void report(int _lenFrom_printf, int lenFromprintf);
void sep(void);
 
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int _len, len;
    char a, b, c;
 
    a = 'a';
    b = 'b';
    c = 'c';
 
    /* RAW STRING TESTS */
    _len = _printf("Let's try to printf a simple sentence.\n");
    sep();
    len = printf("Let's try to printf a simple sentence.\n");
    report(_len, len);
 
    _len = _printf("");
    sep();
    len = printf("");
    report(_len, len);
 
    /* CHAR TESTS */
    _len = _printf("%c.\n", a);
    sep();
    len = printf("%c.\n", a);
    report(_len, len);
 
    _len = _printf("1:%c, 2:%c, 3:%c.\n", a, b, c);
    sep();
    len = printf("1:%c, 2:%c, 3:%c.\n", a, b, c);
    report(_len, len);
 
    _len = _printf("Character:[%c]\n", 'H');
    sep();
    len = printf("Character:[%c]\n", 'H');
    report(_len, len);
 
    /* STRING TESTS */
    _len = _printf("String:[%s]\n", "I am a string !");
    sep();
    len = printf("String:[%s]\n", "I am a string !");
    report(_len, len);
 
    _len = _printf("[%s]\n", "st");
    sep();
    len = printf("[%s]\n", "st");
    report(_len, len);
 
    /* % tests */
    _len = _printf("%%\n");
    sep();
    len = printf("%%\n");
    report(_len, len);
 
    return (0);
}
 
void report(int _printfLen, int printfLen)
{
    printf("Expected: [%d] chars, got [%d] chars.\n", printfLen, _printfLen);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
}
 
void sep(void)
{
    printf("----------\n");
}
