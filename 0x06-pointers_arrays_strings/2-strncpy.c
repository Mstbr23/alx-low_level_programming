#include "main.h"
/**
* _strncpy - copy a string chain
* @destination: input value to be used
* @source: input value to be used
* @n: input value to be used
*
* Return: destination
*/
char *_strncpy(char *destination, char *source, int n)
{
int j;

j = 0;
while (j < n && source[j] != '\0')
{
destination[j] = source[j];
j++;
}
while (j < n)
{
destination[j] = '\0';
j++;
}
return (destination);
}
