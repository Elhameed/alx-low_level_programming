#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets without q & e
 * Return: Always 0 (success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q')
		{
			alpha++;
			continue;
		}
		if (alpha == 'e')
		{
			alpha++;
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
