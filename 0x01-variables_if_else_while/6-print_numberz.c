#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digits below 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
