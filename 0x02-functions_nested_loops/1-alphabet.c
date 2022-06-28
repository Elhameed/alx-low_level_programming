#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */

void print_alphabet(void)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
