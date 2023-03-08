#include "main.h"
/**
* _puts_recursion - function like puts();
* @ss: input to be used.
* Return: Always 0 (Success)
*/
void _puts_recursion(char *ss)
{
if (*ss)
{
_putchar(*ss);
_puts_recursion(ss + 1);
}
else
_putchar('\n');
}
