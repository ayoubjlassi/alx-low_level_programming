#include "main.h"

/**
 * _strlen - rutruns the length of a string
 *
 * @s: string parametre input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
