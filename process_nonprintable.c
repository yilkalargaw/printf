#include <stdarg.h>
#include "main.h"

#include <stdarg.h>
#include "main.h"

/**
 * print_nonish_string - prints strings using custom_putchar
 * @val : string as character array
 *
 * Return: void
 */
void print_nonish_string(char *val)
{
	const char *q = val;

	if (val == NULL)
	{
		_printf("%s", "(null)");
	}

	for (; *q != '\0'; q++)
	{
		if (*q < 32 || *q >= 127)
		{
			custom_putchar('\\');
			custom_putchar('x');
			custom_putchar("0123456789ABCDEF"[*q / 16]);
			custom_putchar("0123456789ABCDEF"[*q % 16]);
		}
		else
		{
			custom_putchar(*q);
		}
	}
}

/**
 * get_nonish_string_length - prints strings using custom_putchar
 * @string : string as character array
 *
 * Return: void
 */
int get_nonish_string_length(char *string)
{
		int length = 0;

		if (string == NULL)
			length = _strlen("(null)");

		while (*string != '\0')
		{
			if (*string < 32 || *string >= 127)
				length += 4;
			else
					length++;
			string++;
		}

		return (length);
}
