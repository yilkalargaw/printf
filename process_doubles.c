#include <stdarg.h>
#include "main.h"

/**
 * print_double - Prints a double to stdout
 *
 * @val: The double to print
 *
 * Return: void
 */
void print_double(double val)
{
	int int_part = 0, i;
	double frac_part = val - int_part;

	int_part = (int)val;
	print_integer(int_part);
	_putchar('.');

	i = 0;
	for (; i < 6; i++)
	{
		frac_part *= 10;
		_putchar((int)frac_part + '0');
		frac_part -= (int)frac_part;
	}
}

/**
 * get_double_length - Gets the length of a double
 *
 * @val: The double to get the length of
 *
 * Return: The length of the double
 */
int get_double_length(double val)
{
	int integer_part = (int) val;
	int integer_length = get_integer_length(integer_part);
	int decimal_length = 0;
	double decimal_part = val - integer_part;

	if (val < 0)
	{
		val = -val;
	}

	if (decimal_part > 0)
	{
		decimal_length++;
		while (decimal_part - (int) decimal_part > 0)
		{
			decimal_part *= 10;
			decimal_length++;
		}
	}
	/* Add one for the decimal point */
	return (integer_length + decimal_length + 1);
}
