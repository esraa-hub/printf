#include "main.h"
/**
*pRINTHEXA - function print the numbers in uppercase HEXA
*
*@cat: argument to print
*
*Return: the count of bytes
*/
int pRINTHEXA(va_list cat)
{
unsigned int s = va_arg(cat, unsigned int);
int j, z, i = 0, count = 0;
char BUFFER[50];
	if (s == 0)
		BUFFER[i++] = '0';
while (s > 0)
{
z = s % 16;
	if (z < 10)
		BUFFER[i++] = '0' + z;
	else
		BUFFER[i++] = 'A' + (z - 10);
	s /= 16;
}
	for (j = i - 1; j >= 0; j--)
		count += _putchar(BUFFER[j]);
	return (count);
}
