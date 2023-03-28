#include <stdarg.h>
#include "main.h"

/**
 * print_unsigned_long - Gets the length of an unsigned long
 *
 * @val: The unsigned long to get the length of
 *
 * Return: The length of the unsigned long
 */
void print_unsigned_long(unsigned long val)
{
	if (val > 9)
		print_unsigned_long(val / 10);
	_putchar(val % 10 + '0');
}

/**
 * get_unsigned _long_length - Gets the length of an
 *  unsigned long
 *
 * @val: The unsigned long to get the length of
 *
 * Return: The length of the unsigned long
 */
int get_unsigned_long_length(unsigned long val)
{
	int len = 0;

	if (val == 0)
	{
		return (1);
	}

	while (val != 0)
	{
		len++;
		val /= 10;
	}
	return (len);
}
