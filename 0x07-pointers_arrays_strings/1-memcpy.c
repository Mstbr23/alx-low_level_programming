#include "main.h"

/**
*_memcpy - a function that copies memory area
*@destination: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *destination, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
destination[r] = src[r];
n--;
}
return (destination);
}
