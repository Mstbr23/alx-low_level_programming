#include "main.h"

/**
 * main - function print_alphabet()
 * Description: ' prints the alphabet, in lowercase plus a new line
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
	return (0);
}
