#include "main.h"
/**
* _strcat - concatenates two strings.
* @dst: input value
* @src: input value
* Return: void	
*/
char *_strcat(char *dst, char *src)
{
int i;
int j;

i = 0;
while (dst[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dst[i] = src[j];
i++;
j++;
}		
dst[i] = '\0';
return (dst);
}
