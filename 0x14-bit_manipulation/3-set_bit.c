#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: unsigned long to change
  * @index: index to change to one
  * Return: 1 if it worked or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *pointer;
	unsigned long int ind = 1;

	if (index > 64)
	{
		return (-1);
	}
	pointer = n;
	ind <<= index;
	if (!(*pointer & ind))
		*pointer += ind;
	return (1);

}
