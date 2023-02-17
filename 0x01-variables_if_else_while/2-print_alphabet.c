#include <stdio.h>
/**
  * main - entry point
  * Description: program that prints the alphabet in lowercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	char cc;

	cc = 'a';

	while
		(cc <= 'z')
		{
			putchar(cc);
			cc++;
		}
	putchar('\n');
	return (0);
}
