#include <stdarg.h>
#include "main.h"

/**
	* print_integer - Prints an integer to stdout
	*
	* @val: The integer to print
	*
	* Return: void
	*/
void print_integer(int val)
{
	if (val < 0)
		custom_putchar('-'), val = -val;
	if (val > 9)
		print_integer(val / 10);

	custom_putchar(val % 10 + '0');
}

/* /\** */
/*	* print_integer - Prints an integer to stdout */
/*	* */
/*	* @n: The integer to print */
/*	* */
/*	* Return: void */
/*	*\/ */
/* void print_integer(my_long_long n) */
/* { */
/*	char str[21]; */
/*	int i = 0; */

/*	if (n < 0) */
/*	{ */
/*		custom_putchar('-'); */
/*		n = -n; */
/*	} */
/*	if (n == 0) */
/*	{ */
/*		custom_putchar('0'); */
/*		return; */
/*	} */
/*	while (n > 0) */
/*	{ */
/*		str[i++] = n % 10 + '0'; */
/*		n /= 10; */
/*	} */
/*	while (i > 0) */
/*	{ */
/*		custom_putchar(str[--i]); */
/*	} */
/* } */

/**
 * get_integer_length - Gets the length of an integer
 *
 * @val: The integer to get the length of
 *
 * Return: The length of the integer
 */
int get_integer_length(int val)
{
	int len = 0;

	if (val == 0)
		return (1);

	while (val != 0)
	{
		len++;
		val /= 10;
	}
	return (len);
}
