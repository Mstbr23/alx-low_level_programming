#include "main.h"
/**
* puts2 - function that print only one character out of two.
* @string: input to use.
* Return: print Character.
*/
void puts2(char *string)
{
int longg = 0;
int t = 0;
char *y = string;
int o;

while (*y != '\0')
{
y++;
longg++;
}
t = longg - 1;
for (o = 0 ; o <= t ; o++)
{
if (o % 2 == 0)
{
_putchar(string[o]);
}
}
_putchar('\n');
}
