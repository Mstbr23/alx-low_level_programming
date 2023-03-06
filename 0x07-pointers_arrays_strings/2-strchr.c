#include "main.h"

/**
* _strchr - Entry point
* @ss: input to use.
* @c: input to use.
* Return: Always 0 (Success)
*/
char *_strchr(char *ss, char c)
{
int i = 0;

for (; ss[i] >= '\0'; i++)
{
if (ss[i] == c)
return (&ss[i]);
}
return (0);
}
