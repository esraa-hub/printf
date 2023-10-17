#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlid.h>
#include <stdio.h>
#include <unistd.h>

#define NULL_STRING ("null")
/**
*struct function - struct contain string and function
*
*@s: pointer as a first member
*
*@f: function as a seconed member
*/
typedef struct function
{
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
int revers_it(va_list cat);
int printunsigned (va_list cat);
int printocta(va_list cat);
int printhexa(va_list cat);
int pRINTHEXA(va_list cat);
#endif
