#include "main.h"

/*
 *
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char low;

	for (i = 1; i <= 10; i++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low);
		}
		_putchar('\n');
	}
}
