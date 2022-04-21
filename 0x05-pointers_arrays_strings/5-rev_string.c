#include "main.h"
#include <stdio.h>

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
