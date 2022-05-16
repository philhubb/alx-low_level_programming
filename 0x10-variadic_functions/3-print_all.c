#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function that prints anyting.
 * @format: A list of type of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	char *temp;
	int i = 0;

	va_start(lst, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(lst, double));
				break;
			case 's':
				temp = va_arg(lst, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(lst);
	printf("\n");
}
