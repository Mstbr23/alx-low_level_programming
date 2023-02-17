#include <stdio.h>
/**
  * main - Entry point
  * Description: ' prints all single digit numbers of base 10 starting from 0'
  * Return: Always  0 (Success)
  */
int main(void)
{
	int cc = 0;

	while
		(cc < 10)
		{
			putchar(cc + '0');
			cc++;
		}
	putchar('\n');
	return (0);
}
