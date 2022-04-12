#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase followed by a new line
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
