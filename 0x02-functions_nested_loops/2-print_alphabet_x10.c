#include "main.h"

/**
 * print_alphabet_x10 - function
 * Description: prints 10 times the alphabet in lowercase
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int a = 0;

	while (a <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		a++;
	}
}
