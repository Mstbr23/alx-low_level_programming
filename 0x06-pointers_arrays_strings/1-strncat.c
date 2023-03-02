#include "main.h"
/**
* _strncat - concatenate two strings
* using n bytes from source.
* @destination: input value
* @source: input value
* @n: input value
*
* Return: destination
*/
char *_strncat(char *destination, char *source, int n)
{
int i;
int j;

i = 0;
while (destination[i] != '\0')
{
i++;
}
j = 0;
while (j < n && source[j] != '\0')
{
destination[i] = source[j];
i++;
j++;
}
destination[i] = '\0';
return (destination);
}
