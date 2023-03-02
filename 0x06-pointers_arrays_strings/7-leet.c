#include "main.h"
/**
* leet - encode into 1337 spk
* @nn: input value
* Return: nn value
*/
char *leet(char *nn)
{
int i, j;
char ss1[] = "aAeEoOtTlL";
char ss2[] = "4433007711";

for (i = 0; nn[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (nn[i] == ss1[j])
{
nn[i] = ss2[j];
}
}
}
return (nn);
}

