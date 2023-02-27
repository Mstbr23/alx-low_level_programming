#include "main.h"
/**
* print_rev - print a string chain in reverse.
* @ss: string.
* return: 0 Success
*/
void print_rev(char *ss)
{
int longi = 0;
int o;

while (*ss != '\0')
{
longi++;
ss++;
}
ss--;
for (o = longi; o > 0; o--)
{
_putchar(*ss);
ss--;
}
_putchar('\n');
}
