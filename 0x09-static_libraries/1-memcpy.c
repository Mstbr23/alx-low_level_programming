#include "main.h"
/**
*_memcpy - a function that copies memory space.
*@dst: memory where is stored.
*@src: memory where is copied.
*@n: number of bytes.
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dst, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dst[r] = src[r];
n--;
}
return (dst);
}
