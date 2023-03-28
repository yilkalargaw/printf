#include <stdarg.h>
#include "main.h"


int get_HEX_length(unsigned int val)
{
	int length = 0;

	if (val / 16)
		length += get_HEX_length(val / 16);

	length++;
	return (length);
}

void print_HEX(unsigned int val)
{
	char *hex = "0123456789ABCDEF";

	if (val / 16)
		print_HEX(val / 16);
	_putchar(hex[val % 16]);
}
