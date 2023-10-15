#include "main.h"
/**
*_print_specifier - function to print what follow %
*
*@func: argument which declare what function we will use
*
*@cat: the other arguments
*
*Return: the count of the bytes.
*/
int _print_specifier(char *func, va_list cat)
{
int i = 0, count = 0;
	while (spec[i].spec != NULL)
{
		if (strcmp(func, spec[i].spec) == 0)
{
		count += spec[i].f(cat);
}
	i++;
}
	return (count);
}
