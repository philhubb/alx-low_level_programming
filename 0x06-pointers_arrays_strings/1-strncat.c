#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A ponter to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i = 0;

	while (i < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;

	}
	dest[index + a] = '\0';
	return (dest);
}
