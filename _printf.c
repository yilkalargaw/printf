#include <stdarg.h>
#include "main.h"

/**
 * _printf - an implementation of printf
 * @format: string
 * ...: further values for the format specifiers as
 * variadic options
 * Return: length
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;
	const char *p = format;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; *p != '\0'; p++)
	{
		if (*p == '%')
			GENERATE_SWITCH();
		else
		{
			_putchar(*p);
			length++;
		}
	}
	va_end(args);

	return (length);
}
