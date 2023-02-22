#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci
* Return: ALways void
*/
int main(void)
{
	int a = 1, b = 2, c;
	printf("%d, %d, ", a, b);
	for (int i = 2; i < 98; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 97)
		{
			printf(", ");
			a = b;
			b = c;
		}
		printf("\n");
		return 0;
	}
}

