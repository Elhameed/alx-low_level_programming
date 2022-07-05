#include "main.h"

/**
 * print_diagonal - prints diagonal line on the terminal
 * @n: numbers of lines and columns
 * Return: none
 */

void print_diagonal(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('\\');

		c++;
	}
	_putchar('\n');
}
