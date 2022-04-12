#include "main.h"

/**
 * print_alphabet and check description
 * Description: It prints the alphabet in lowercase
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
