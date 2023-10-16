#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdlid.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

#define NULL_STRING ("null")
typedef struct function {
    char *s;
    int (*f)(va_list);
} func;
int printbinary_rec(unsigned int n);
int printbinary(va_list cat);
int printchar(va_list cat);
int printstring(va_list cat);
int printinteger(va_list cat);
int _printf(const char *format, ...);
int _putchar(char x);
int _print_specifier(char *func, va_list cat);
#endif

