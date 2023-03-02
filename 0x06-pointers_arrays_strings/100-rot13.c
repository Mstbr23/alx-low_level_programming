#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @ss: pointer to string params
*
* Return: *ss
*/

char *rot13(char *ss)
{
int i;
int j;
char dt1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char dtrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; ss[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (ss[i] == dt1[j])
{
ss[i] = dtrot[j];
break;
}
}
}
return (ss);
}
