#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings with a separator
 * followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: int, number of parameters
 * @...: Other parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list lst;
	unsigned int i = 0;
	char *s;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(lst, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(lst);

	putchar('\n');
}
