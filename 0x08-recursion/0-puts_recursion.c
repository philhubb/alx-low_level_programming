#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion -  a function that prints a string, followed by a new line.
=======
 * _puts_recursion - prints a string, followed by a new line
>>>>>>> 97c2894c5bfd30436080dc3ff031bc3bb2db2334
 * @s: pointer to the string
 * Return: void
 */

<<<<<<< HEAD
void _puts_recursion(char *s)
{
=======

void _puts_recursion(char *s)
{

>>>>>>> 97c2894c5bfd30436080dc3ff031bc3bb2db2334
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
<<<<<<< HEAD
=======

>>>>>>> 97c2894c5bfd30436080dc3ff031bc3bb2db2334
}
