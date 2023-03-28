#include <stdarg.h>
#include "main.h"

/**
 * print_string - prints strings using custom_putchar
 * @val : string as character array
 *
 * Return: void
 */
void print_string(char *val)
{
	const char *q = val;

	for (; *q != '\0'; q++)
		custom_putchar(*q);
}
