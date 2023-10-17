#include "main.h"

/**
 * revers_it- the function to revers the sting with specifier small r
 *
 * @cat:the list of string to be reversed
 *
 * Return:integer
 *
 */
int revers_it(va_list cat)
{
	int counter = 0, i, leng;
	char *printed_string;

	printed_string = va_arg(cat, char*);
	if (printed_string == NULL)
		counter = "(null)";
	for (leng = 0; printed_string[leng] != '\0'; leng++)
		;
	for (i = leng - 1; printed_string[i] != '\0'; i--)
		counter += _putchar(printed_string[i]);
	return (counter);

}
