#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers with a separator 
 * followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: int, number of undefined arguments
 * @...: Other parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i = 0;
	int nums;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(lst, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
