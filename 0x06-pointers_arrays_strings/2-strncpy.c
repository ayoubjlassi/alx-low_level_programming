#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - that copies a string
 * Return: dest
 * @dest : input string
 * @src : input string
 * @n : input integer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}
