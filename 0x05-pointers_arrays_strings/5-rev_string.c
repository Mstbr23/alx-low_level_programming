#include "main.h"

/**
* rev_string - Reverses a string chain.
* @ss: Input string to use.
* Return: String in reverse.
*/
void rev_string(char *ss)
{
char rev = ss[0];
int counter = 0;
int i;

while (ss[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = ss[i];
ss[i] = ss[counter];
ss[counter] = rev;
}
}
