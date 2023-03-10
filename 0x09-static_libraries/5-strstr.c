#include "main.h"
/**
* _strstr - Entry point
* @hsk: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *hsk, char *needle)
{
for (; *hsk != '\0'; hsk++)
{
char *l = hsk;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (hsk);
}
return (0);
}
