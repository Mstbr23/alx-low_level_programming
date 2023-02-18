#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * Description: 'a C program that print a specific text'
  * Return: Always  0 (Success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
		}
	}
	return (0);
}
