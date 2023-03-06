#include "main.h"
/**
* _strspn - Entry point
* @ss: input
* @accepted: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *ss, char *accepted)
{
unsigned int n = 0;
int r;

while (*ss)
{
for (r = 0; accepted[r]; r++)
{
if (*ss == accepted[r])
{
n++;
break;
}
else if (accepted[r + 1] == '\0')
return (n);
}
ss++;
}
return (n);
}
