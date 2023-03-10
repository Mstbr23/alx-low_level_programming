#include "main.h"
		
/**
* char *_strcpy - copies the string pointed to by src
* @dst: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dst, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dst[x] = src[x];
}
dst[l] = '\0';
return (dst);
}
