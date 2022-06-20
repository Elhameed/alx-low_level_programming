#include <stdio.h>

/**
 * main -Entry point
 * Description: prints all single digit numbers from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
