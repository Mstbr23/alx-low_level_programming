#include "main.h"

/**
* wildcmp - Compare two strings.
* @ss1: pointer to string 1.
* @ss2: pointer to string 2.
* Return: Always 0 (Success).
*/

int wildcmp(char *ss1, char *ss2)
{
if (*ss1 == '\0')
{
if (*ss2 != '\0' && *ss2 == '*')
{
return (wildcmp(ss1, ss2 + 1));
}
return (*ss2 == '\0');
}

if (*ss2 == '*')
{
return (wildcmp(ss1 + 1, ss2) || wildcmp(ss1, ss2 + 1));
}
else if (*ss1 == *ss2)
{
return (wildcmp(ss1 + 1, ss2 + 1));
}
return (0);
}
