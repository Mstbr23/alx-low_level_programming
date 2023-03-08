#include "main.h"
/**
* _print_rev_recursion - Prints the string chain in reverse.
* @ss: The string to be printed.
*/
void _print_rev_recursion(char *ss)
{
if (*ss)
{
_print_rev_recursion(ss + 1);
_putchar(*ss);
}
}
