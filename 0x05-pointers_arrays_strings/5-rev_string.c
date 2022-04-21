#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 * @s: string to check the length of a given string
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string - a function that reverses a string.
 * @s: string to reverse
 * Retur: void
 */
void rev_string(char *s)
{
	int i, len;
	char a, z;

	len = _strlen(s) - 1;
	i = 0;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}
}
