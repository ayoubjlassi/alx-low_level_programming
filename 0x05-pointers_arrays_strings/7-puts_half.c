#include "main.h"

/**
 * put_half - print second half of a string
 * @str: char array string type
 * Drscription: if odd number of char, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str [i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
