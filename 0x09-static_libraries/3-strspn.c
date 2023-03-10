#include "main.h"
/**
* _strspn - Entry point
* @s: input
* @accepted: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accepted)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accepted[r]; r++)
{
if (*s == accepted[r])
{
n++;
break;
}
else if (accepted[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
