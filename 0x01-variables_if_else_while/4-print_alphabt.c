#include <stdio.h>
/**
  * main - Entry point
  * Description: ' prints the alphabet in lowercase &&  a new line'
  * Return: Always  0 (Success)
  */
int main(void)
{
	char cc;

	cc = 'a';

	while
		(cc <= 'z')
		{
			if ((cc != 'q' &&  cc != 'e') && cc <= 'z')
				putchar(cc);
			cc++;
		}
	putchar('\n');
	return (0);
}
