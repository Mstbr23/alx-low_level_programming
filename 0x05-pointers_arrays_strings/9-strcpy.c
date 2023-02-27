#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @destin: destination to copy to.
* @src: source to copy from
* Return: string
*/
char *_strcpy(char *destin, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
destin[x] = src[x];
}
destin[l] = '\0';
return (destin);
}
