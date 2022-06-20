#include <stdio.h>
#include <uninstd.h>

/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
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
	return (0);
}
