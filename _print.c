#include "main.h"
/**
*printchar - print one char as an int
*
*@cat: argument to print
*
*Return: the count of we print
*/
int printchar (va_list cat)
{
int c = va_arg(cat, int);
	return (write(1, &c, 1));
}
/**
*printstring - print one string
*
*@cat: argument contain the string
*
*Return: bytes of the string
*/
int printstring(va_list cat)
{
char *s = va_arg(cat, char *);
int i, count = 0;
	for (i = 0; s[i] != '\0'; i++)
{
		count += _putchar(s[i]);
}
	va_end(cat);
	return (count);
}
