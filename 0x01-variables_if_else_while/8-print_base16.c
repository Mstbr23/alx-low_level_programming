#include <stdio.h>
/**
  * main - Entry point
  * Description: 'a C program that print a specific text'
  * Return: Always  0 (Success)
  */
int main(void)
{
	char cc;
	int dd;

	cc = 'a';

	while
		(dd < 10)
		{
			putchar(dd + '0');
			dd++;
		}
	while
		(cc <= 'f')
		{
			putchar(cc);
			cc++;
		}
	putchar('\n');
	return (0);
}
