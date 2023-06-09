#include <stdarg.h>
#include "main.h"

/**
 * print_ptr - Prints an pointer to stdout
 *
 * @ptr_val: The pointer to print
 *
 * Return: void
 */
void print_ptr(void *ptr_val)
{
	unsigned long val = (unsigned long)ptr_val;
	char hex[20];
	int i = 0,  j;

	while (val != 0)
	{
		int temp = 0;

		temp = val % 16;
		if (temp < 10)
		{
			hex[i] = temp + 48;
			i++;
		}
		else
		{
			hex[i] = temp + 87;
			i++;
		}
		val /= 16;
	}

	custom_putchar('0');
	custom_putchar('x');

	for (j = i - 1; j >= 0; j--)
		custom_putchar(hex[j]);
}
/* /\** */
/*  * get_ptr_length - Gets the length of an pointer */
/*  * */
/*  * @ptr_val: The HEX to get the length of */
/*  * */
/*  * Return: The length of the octal */
/* *\/ */
/* int get_ptr_length(void *ptr_val) */
/* { */
/*	return(14); */
/* } */
