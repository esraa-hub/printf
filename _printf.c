#include "main.h"
/**
*_print_specifier - function to print what follow %
*
*@s: argument which declare what function we will use
*
*@cat: the other arguments
*
*Return: the count of the bytes.
*/
int _print_specifier(char *s, va_list cat)
{
int j = 0, i = 0, count = 0;
func kitty[] = {
{"c", printchar},
{"s", printstring},
{"i", printinteger},
{"d", printinteger},
{"b", printbinary},
{"S", nonchar},
{"u", printunsigned},
{"o", printocta},
{"x", printhexa},
{"X", pRINTHEXA},
{"r", revers_it},
{"R", rotthirteen},
{NULL, NULL}
};
	while (kitty[i].s != NULL)
{
		while (kitty[i].s != NULL && s[j] != '\0')
{
			if (s[j] != kitty[i].s[j])
				break;
			j++;
}
		if (s[j] == '\0' && kitty[i].s[j] == '\0')
			count += kitty[i].f(cat);
	i++;
}
	va_end(cat);
	return (count);
}
/**
*_printf - function which print out the parameters
*
*@format: pointer to the format we will print
*
*Return: the count of the input execlude the null
*/
int _printf(const char *format, ...)
{
va_list cat;
char spec[2];
int count = 0, i;
va_start(cat, format);
	for (i = 0; format[i] != '\0'; i++)
{
		if (format[i] == '%')
{
		spec[0] = format[++i];
		spec[1] = '\0';
		count += _print_specifier(spec, cat);
}
		else
			count += _putchar(format[i]);
}
	va_end(cat);
	return (count);
}
