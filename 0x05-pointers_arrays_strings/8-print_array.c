#include "main.h"

/**
* print_array - a function that prints n elements of an array
* @aa: array name
* @n: is the number of elements OF the array to be printed
* Return: aa and n inputs
*/
void print_array(int *aa, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", aa[i]);
}
if (i == (n - 1))
{
printf("%d", aa[n - 1]);
}
printf("\n");
}
