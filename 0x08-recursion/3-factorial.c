#include "main.h"

/**
* factorial - returns the factorial of a given number
* @k: number to return the factorial from.
* Return: factorial of k.
*/
int factorial(int k)
{
if (k < 0)
return (-1);
if (k == 0)
return (1);
return (k * factorial(k - 1));
}
