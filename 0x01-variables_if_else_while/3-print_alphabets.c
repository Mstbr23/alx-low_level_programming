#include <stdio.h>
/**
  * main - Entry point
  * Description: 'a C program that prints in lowercase & then in uppercase'
  * Return: Always  0 (Success)
  */
int main(void)
{
	char cc;

	char dd;

	cc = 'a';
	dd = 'A';

	while
		(cc <= 'z')
		{
			putchar(cc);
			cc++;
		}
	while
		(dd <= 'Z')
		{
			putchar(dd);
			dd++;
		}
	putchar('\n');
	return (0);
}
