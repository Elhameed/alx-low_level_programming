#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
	for (c = 'a';  c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
	}
}
