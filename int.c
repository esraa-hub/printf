#include "main.h"
/**
*printinteger - function to print one integer
*
*@cat: arguments to print
*
*Return: the count of bytes will print
*/
int printinteger(va_list cat)
{
int x = va_arg(cat, int);
char buffer[50];
sprintf(buffer, "%d", x);
	return (write(1, buffer, strlen(buffer)));
}
/**
*_putchar - Print a character
*
* @x: charachter to be checked
*
*Return: one character
*/
int _putchar(char x)
{
	return (write(1, &x, 1));
}
