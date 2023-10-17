#include "main.h"
/**
*printunsigned - function to print the unsigned numbers
*
*@cat: argument to be printed
*
*Return: the count of bytes
*/
int printunsigned (va_list cat)
{
unsigned int y;
int z, count = 0;
unsigned int s;
char BUFFER[50];
s = va_arg(cat, unsigned int);
	if (s == 0)
	BUFFER[count++] = '0';
	y = s;
	while (y > 0)
{
		y /= 10;
		count++;
}
	for (z = (count - 1); z >= 0; z--)
{
		BUFFER[z--] = '0' + (s % 10);
		s /= 10;
}
	return (write(1, BUFFER, count));
}
