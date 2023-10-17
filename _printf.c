#include "main.h"
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
func kitty[] = {
{"c", printchar},
{"s", printstring},
{"i", printinteger},
{"d", printinteger},
{"b", printbinary},
{"S", printnonchar},
{"u", printunsigned},
{"o", printocta},
{"x", printhexa},
{"X", pRINTHEXA},
{"r", revers_it},
{"R", rotthirteen},
{NULL, NULL}
};
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
