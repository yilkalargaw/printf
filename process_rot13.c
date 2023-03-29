#include <stdarg.h>
#include "main.h"
/**
 * rot13 - encode string in rot13
 * @str: input string pointer
 *
 * Return: char
 */
char *rot13(char *str)
{
	char *p = str;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j = 0;


	for (; p[j] != '\0'; j++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (p[j] == alphabet[i])
			{
				p[j] = rot13[i];
				break;
			}
		}
	}
	return (p);
}
