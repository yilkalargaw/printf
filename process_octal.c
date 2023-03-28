#include <stdarg.h>
#include "main.h"

/**
 * print_octa - Prints an octal to stdout
 *
 * @val: The octal to print
 *
 * Return: void
 */
void print_octal(unsigned int val)
{
	char buffer[20];
	int i, j;

	for (i = 0; val != 0; i++)
	{
		buffer[i] = (val % 8) + '0';
		val /= 8;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}

/**
 * get_octal_length - Gets the length of an octal
 *
 * @val: The octal to get the length of
 *
 * Return: The length of the octal
 */
int get_octal_length(unsigned int val)
{
	int len = 0;

	if (val == 0)
		return (1);

	while (val != 0)
	{
		len++;
		val /= 8;
	}

	return (len);
}
