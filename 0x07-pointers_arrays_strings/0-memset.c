#include "main.h"

/**
* _memset - fill a block of memory with a specific value
* @ss: starting address of memory to be filled
* @bb: the choosed value
* @n: number of bytes to change.
* Return: changed array with new value for n bytes
*/
char *_memset(char *ss, char bb, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
ss[i] = bb;
n--;
}
return (ss);
}
