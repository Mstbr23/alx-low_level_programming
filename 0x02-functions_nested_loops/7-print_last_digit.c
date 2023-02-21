#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: number to check.
 * Return: value of last digit number.
 */
int print_last_digit(int a)
{
	int lastdigit;

	lastdigit = a % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
