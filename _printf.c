#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;
	const char *p = format;

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
