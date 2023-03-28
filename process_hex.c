#include <stdarg.h>
#include "main.h"

/**
 * print_hex - Prints an octal to stdout
 *
 * @val: The hex to print
 *
 * Return: void
 */
void print_hex(unsigned int val)
{
	char *hex = "0123456789abcdef";

	if (val / 16)
		print_hex(val / 16);
	_putchar(hex[val % 16]);
}

/**
 * get_hex_length - Gets the length of an hex
 *
 * @val: The hex to get the length of
 *
 * Return: The length of the hex
 */
int get_hex_length(unsigned int val)
{
	int length = 0;

	if (val / 16)
		length += get_hex_length(val / 16);
	length++;
	return (length);
}
