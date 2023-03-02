#include "main.h"
/**
* _strcmp - compare string values
* @ss1: input value
* @ss2: input value
* Return: ss1[i] - ss2[i]
*/
int _strcmp(char *ss1, char *ss2)
{
int i;

i = 0;
while (ss1[i] != '\0' && ss2[i] != '\0')
{
if (ss1[i] != ss2[i])
{
return (ss1[i] - ss2[i]);
}
i++;
}
return (0);
}
