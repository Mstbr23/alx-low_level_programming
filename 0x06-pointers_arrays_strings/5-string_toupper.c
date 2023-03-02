#include "main.h"
/**
* string_toupper - change all lowercase to uppercase
* @nn: pointer to use
* Return: nn
*/
char *string_toupper(char *nn)
{
int i;

i = 0;
while (nn[i] != '\0')
{
if (nn[i] >= 'a' && nn[i] <= 'z')
nn[i] = nn[i] - 32;
i++;
}
return (nn);
}
