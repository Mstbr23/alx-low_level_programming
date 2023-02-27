#include "main.h"
/**
* puts_half - a function that prints half of a string chain.
* n = (length_of_the_string - 1) / 2
* @string: input
* Return: half of input
*/
void puts_half(char *string)
{
int a, n, longg;

longg = 0;

for (a = 0; string[a] != '\0'; a++)
longg++;

n = (longg / 2);

if ((longg % 2) == 1)
n = ((longg + 1) / 2);

for (a = n; string[a] != '\0'; a++)
_putchar(string[a]);
_putchar('\n');
}
