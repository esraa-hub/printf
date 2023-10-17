#include "main.h"
/**
 * nonchar-the function to print non char.
 *
 * @cat: the list of input.
 *
 * Return: integer.
 */

int nonchar(va_list cat)
{
	char *nonchar;
	int i, counter = 0;

	nonchar = va_arg(cat, char*);
	if (nonchar == NULL)
	{
		nonchar = "(null)";
	}
	for (i = 0; nonchar[i] != '\0'; i++)
	{
		if (nonchar[i] < 32 || nonchar[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			if (nonchar[i] < 16)
			{
				_putchar('0');
				counter++;
			}
			counter += _putchar(nonchar[i]);
	}
}
	return (counter);
}
