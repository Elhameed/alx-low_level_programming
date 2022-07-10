#include "main.h"

/**
* _strlen - calculate string length
* @a: string
<<<<<<< HEAD
* Return: lenght of string
=======
* Return: lengh
>>>>>>> 66a7e64280d884ae783b6ff5258e667ccd7a2047
**/
int _strlen(char *a)
{
	int i = 0;

	while (*a != '\0')
		i++, a++;
	return (i);
}

/**
* *infinite_add - adds two numbers
<<<<<<< HEAD
* @n1: string
* @n2: string
* @r: string
* @size_r: int
* Return: 0
=======
* @n1: number1
* @n2: number2
* @r: buffer to store result
* @size_r: buffer size
* Return: pointer to the result
>>>>>>> 66a7e64280d884ae783b6ff5258e667ccd7a2047
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k, n2_s, n1_s, m;

	r[size_r] = '\0';
	k = 0;
	m = 0;
	n1_s = _strlen(n1);
	n2_s = _strlen(n2);
	size_r--;
	if (n1_s > size_r || n2_s > size_r || size_r == 0 ||
	    (n1_s == size_r && n2_s == size_r &&
	     (n1[0] - '0') + (n2[0] - '0') > 9))
	{
		return (0);
	}
	n1_s--;
	n2_s--;
	while (n1_s >= 0 || n2_s >= 0)
	{
		if (n1_s < 0)
			m = n2[n2_s] - '0' + k;
		else if (n2_s < 0)
			m = n1[n1_s] - '0' + k;
		else
			m = (n1[n1_s] - '0') + (n2[n2_s] - '0') + k;
		r[size_r] = (m % 10) + '0';
		k = m / 10;
		n1_s--, n2_s--, size_r--;
	}
	if (size_r > 0 && (k < 9 && k > 0))
	{
		r[size_r] = k + '0';
		return (r + size_r);
	}
	else if (k == 0)
		return (r + size_r);
	return (0);
}
