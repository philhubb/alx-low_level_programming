#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number;
	unsigned long int eye = 1;
	int count = 0;

	eye <<= 63;
	number = (n ^ m);
	for (; eye > 0; eye >>= 1)
	{
		if (eye & number)
		{
			count++;
		}
	}
	return (count);


}
