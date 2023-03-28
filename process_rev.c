#include <stdarg.h>
#include "main.h"

/**
 * print_rev - print a string reverse
 * @s: pointer to char input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	for (i = i - 1; i >= 0; i--)
		custom_putchar(*(s + i));
	custom_putchar(10);
}
