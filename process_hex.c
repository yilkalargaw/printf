#include <stdarg.h>
#include "main.h"

void print_hex(unsigned int val)
{
	char *hex = "0123456789abcdef";

	if (val / 16)
		print_hex(val / 16);
	_putchar(hex[val % 16]);
}

int get_hex_length(unsigned int val)
{
	int length = 0;

	if (val / 16)
		length += get_hex_length(val / 16);
	length++;
	return (length);
}
