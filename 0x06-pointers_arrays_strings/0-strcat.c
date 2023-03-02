#include "main.h"
/**
* _strcat - a function that concatenates two strings 
* @destination: input to be used.
* @source: input to be used.
* Return: void Success
*/
char *_strcat(char *destination, char *source)
{
int i;
int j;
i = 0;
while (destination[i] != '\0')
{
i++;
}
j = 0;
while (source[j] != '\0')
{
destination[i] = source[j];
i++;
j++;
}
destination[i] = '\0';
return (destination);
}
