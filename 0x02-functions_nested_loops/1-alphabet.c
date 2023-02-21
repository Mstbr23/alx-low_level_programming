#include "main.h"

/**
 * print_alphabet - function print_alphabet()
 * Description: ' prints the alphabet, in lowercase plus a new line
 * Return: Void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
