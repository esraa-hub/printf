#include "main.h"
/**
*printbinary_rec - to print the uninsigned integer
*
*@n: argument to print
*
*Return: the number of bytes we will print
*/
int printbinary_rec(unsigned int n)
{
int count = 0;
	if (n == 0)
		return (count);
count += printbinary_rec(n / 2);
count += _putchar('0' + (n % 2));
	return (count);
}
/**
*printbinary - Print the uninsigned integer with binary numbers
*
*@cat: argument to print
*
*Return: the number of bytes we will print
*/
int printbinary(va_list cat)
{
unsigned int n = va_arg(cat, unsigned int);
int count = 0;
	if (n == 0)
		return (_putchar('0'));
count = printbinary_rec(n);
	return (count);
}
/**
*printpercent - function to print %
*
*@cat: void argument
*
*Return: %
*/
int printpercent(va_list cat)
{
(void) cat;
	return (_putchar('%'));
}
