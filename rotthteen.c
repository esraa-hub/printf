#include "main.h"
/**
 * rotthirteen- the functon to shift the alpha by thirteen charachter
 *
 * @cat: the charchter list
 *
 * Return:int
 */
int rotthirteen(va_list cat)
{
	int counter, i, leng;
	char *shifted_char;

	shifted_list = va_arg(cap, char*);
	for (i = 0; shifted_list[i] != '\0'; i++)
	{
		if (shifted_list[i] >= 'a' && shifted_list[i] <= 'z')
		{
			if (shifted_list[i] <= 'm')
				counter += _putchar(shifted_list[i] + 13);
			else
				counter += _putchar(shifted_list[i] - 13);
		}
		else if (shifted_list[i] >= 'A' && shifted_list[i] <= 'Z')
		{
			if (shifted_list[i] <= 'M')
				counter += _putchar(shifted_list[i] + 13);
			else
				counter += _putchar(shifted_list[i] - 13);
		}
		/**
		 * else
		 * {
		 * counter += _putchar(shifted_list[i]);
		 * }
		 */
	}
	return (counter);
}
