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
	while (kitty[i].s != NULL)
{
		if (strcmp(func, kitty[i].s) == 0)
{
		count += kitty[i].f(cat);
}
	i++;
}
	return (count);
}
