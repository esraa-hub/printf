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
int y, z;
char BUFFER[50];
int count = 0;
	if (x == 0)
	BUFFER[count++] = '0';
	if (x < 0)
{
		BUFFER[count++] = '-';
		x = -x;
}
y = x;
	while (y > 0)
{
		y /= 10;
		count++;
}
	for (z = (count - 1); z >= 0; z--)
{
		BUFFER[z] = '0' + (x % 10);
		x /= 10;
}
	va_end(cat);
	return (write(1, BUFFER, count));
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
