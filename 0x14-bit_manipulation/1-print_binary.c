#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
