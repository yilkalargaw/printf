#include <stdarg.h>
#include "main.h"
/**
 * print_rot13 - encode string in rot13
 * @s: input string pointer
 *
 * Return: void
 */
void print_rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;


	for (; s[j] != '\0'; j++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (s[j] == alphabet[i])
			{
				custom_putchar(rot13[i]);
				break;
			}
			custom_putchar(s[j]);
		}
	}
}
