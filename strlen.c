#include <stdarg.h>
#include "main.h"

/**
 *_strlen - return length of a string
 *@s: pointer to string
 *
 *Return: length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
		len++;

	return (len);
}
