#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
* @aa: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *aa, int size)
{
int sum1, sum2, k;

sum1 = 0;
sum2 = 0;

for (k = 0; k < size; k++)
{
sum1 = sum1 + aa[k * size + k];
}
for (k = size - 1; k >= 0; k--)
{
sum2 += aa[k * size + (size - k - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
