#include "main.h"
#include <math.h>
/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (abs(n));
	}
	else
	{
		return (n);
	}
}
