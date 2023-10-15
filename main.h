#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdlid.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

#define NULL_STRING ("null")
int _printf(const char *format, ...);
#endif

