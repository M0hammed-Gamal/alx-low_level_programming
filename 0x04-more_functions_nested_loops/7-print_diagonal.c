#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: input vairable
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	for (p = 0; p < n; p++)
		{
			for (s = 0; s < p; s++)
			{
				_putchar(' ');
			}
		}
			_putchar('\\');
			_putchar('\n');
}
