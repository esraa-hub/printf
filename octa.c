#include "main.h"
/**
*printocta - function to print the number in base 8
*
*@cat: argument to be printed
*
*Return: the count of bytes
*/
int printocta(va_list cat)
{
int y, z;
int count = 0;
unsigned int s;
char BUFFER[50];
s = va_arg(cat, unsigned int);
	if (s == 0)
		BUFFER[count++] = '0';
y = s;
	while (y > 0)
{
		y /= 8;
		count++;
}
	for (z = (count - 1); z >= 0; z--)
{
		BUFFER[z] = '0' + (s % 8);
		s /= 8;
}
	va_end(cat);
	return (write(1, BUFFER, count));
}
