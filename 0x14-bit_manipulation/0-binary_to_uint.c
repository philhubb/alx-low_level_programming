#include "main.h"

/**
  * binary_to_uint - A function that converts a
  * binary number to an unsigned int.
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
