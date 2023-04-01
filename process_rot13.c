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
	char abt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz \n.,!_";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm \n.,!_";

	int i = 0, j = 0;


	for (; s[j] != '\0'; j++)
	{
		for (i = 0; i <= 70; i++)
		{
			if (s[j] == abt[i])
			{
				custom_putchar(r13[i]);
				break;
			}
		}
	}
}
