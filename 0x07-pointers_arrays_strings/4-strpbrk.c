#include "main.h"

/**
* _strpbrk - Entry point
* @g: input
* @accepted: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *g, char *accepted)
{
int k;

while (*g)
{
for (k = 0; accepted[k]; k++)
{
if (*g == accepted[k])
return (g);
}
g++;
}
return ('\0');
}
