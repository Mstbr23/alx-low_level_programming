#include "main.h"
/**
* _strncpy - copy a string.
* @dst: input value
* @src: input value
* @n: input value
* Return: dst
*/
char *_strncpy(char *dst, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dst[j] = src[j];
j++;
}
while (j < n)
{
dst[j] = '\0';
j++;
}
return (dest);
}
