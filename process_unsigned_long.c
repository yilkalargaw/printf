#include <stdarg.h>
#include "main.h"

void print_unsigned_long(unsigned long val)
{
	if (val > 9)
		print_unsigned_long(val / 10);
	_putchar(val % 10 + '0');
}

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
