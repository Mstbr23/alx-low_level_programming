#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @a: integer to be calculated.
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abso;

		abso = a * -1;
		return (abso);
	}
	return (0);
}
