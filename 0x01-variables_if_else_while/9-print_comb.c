#include <stdio.h>
/**
  * main - Entry point
  * Description: 'a C program that print a specific text'
  * Return: Always  0 (Success)
  */
int main(void)
{
	int aa;

	for (aa = 0; aa < 10; aa++)
	{
		putchar(aa + '0');
		if (aa < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
