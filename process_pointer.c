#include <stdarg.h>
#include "main.h"

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

	_putchar('0');
	_putchar('x');

	for (j = i - 1; j >= 0; j--)
		_putchar(hex[j]);
}

int get_ptr_length(void *ptr_val)
{
	#ifdef _WIN64
		/* Divide by four to convert bits to hexadecimal digits */
		return (sizeof(ptr_val) * CHAR_BIT / 4);
	#else
		/* Subtract size of pointer to account for sign extension */
		return (sizeof(ptr_val) * CHAR_BIT / 4 - sizeof(ptr_val));
	#endif
}
