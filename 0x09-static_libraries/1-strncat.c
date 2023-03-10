#include "main.h"
/**
* _strncat - concatenate two strings.
* using at most n bytes from src input.
* @dst: input value
* @src: input value
* @n: input value
* Return: dest
*/
char *_strncat(char *dst, char *src, int n)
{
int i;
int j;

i = 0;
while (dst[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dst[i] = src[j];
i++;
j++;
}
dst[i] = '\0';
return (dst);
}
