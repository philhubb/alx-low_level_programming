#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *pointer;
	unsigned int ind = 1;

	if (index > 63)
	{
		return (-1);
	}
	pointer = n;
	ind <<= index;
	if (index == 0)
	{
		if (*pointer % 2 != 0)
		{
			*pointer -= ind;
			return (1);
		}
		else
			return (1);
	}
	if (*pointer >= ind && (*pointer & ind))
		*pointer -= ind;
	return (1);
}
