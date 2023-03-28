#include <stdarg.h>
#include "main.h"

/**
 * print_integer - Prints an integer to stdout
 *
 * @val: The integer to print
 *
 * Return: void
 */
void print_integer(int val)
{
	if (val < 0)
		_putchar('-'), val = -val;
	if (val > 9)
		print_integer(val / 10);

	_putchar(val % 10 + '0');
}

/**
 * get_integer_length - Gets the length of an integer
 *
 * @val: The integer to get the length of
 *
 * Return: The length of the integer
 */
int get_integer_length(int val)
{
	int len = 0;

	if (val == 0)
		return (1);

	while (val != 0)
	{
		len++;
		val /= 10;
	}
	return (len);
}
