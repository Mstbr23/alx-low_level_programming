#include "main.h"
/**
* reverse_array - reverse array of many integers.
* @aa: array to use.
* @nn: number of elements of array
* Return: void Success
*/
void reverse_array(int *aa, int nn)
{
int i;
int j;

for (i = 0; i < nn--; i++)
{
j = aa[i];
aa[i] = aa[nn];
aa[nn] = j;
}
}
