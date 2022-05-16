#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n:int, number of parameters
 * @...: Other parameters
 * Return: The sum of all parameters
 * Return 0 if error occurs
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lst, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(lst, unsigned int), i++)
		;
	va_end(lst);
	return (sum);
}
