#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int y, z;

	for (y = 0; y <= 98; y++)
	{
		for (z = y + 1; z <= 99; z++)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((z / 10) + '0');
			putchar((z % 10) + '0');

			if (y == 98 && z == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
