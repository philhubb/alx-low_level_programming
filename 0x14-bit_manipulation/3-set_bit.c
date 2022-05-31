#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: unsigned long to change
  * @index: index to change to one
  * Return: 1 if it worked or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
