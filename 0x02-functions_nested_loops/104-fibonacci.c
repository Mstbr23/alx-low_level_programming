#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers from 1, 2.
* Return: Always 0 Success
*/
int main(void)
{
	int cc;
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	unsigned long fibo1_h1, fibo1_h2, fibo2_h1, fibo2_h2;
	unsigned long h1, h2;

	for (cc = 0; cc < 92; cc++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);
		fibo1 = fibo2;
		fibo2 = sum;
	}
	fibo1_h1 = fibo1 / 10000000000;
	fibo2_h1 = fibo2 / 10000000000;
	fibo1_h2 = fibo1 % 10000000000;
	fibo2_h2 = fibo2 % 10000000000;

	for (cc = 93; cc < 99; cc++)
	{
		h1 = fibo1_h1 + fibo2_h1;
		h2 = fibo1_h2 + fibo2_h2;
		if (fibo1_h2 + fibo2_h2 > 9999999999)
		{
			h1 += 1;
			h2 += 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (cc != 98)
			printf(", ");
		fibo1_h1 = fibo2_h1;
		fibo1_h2 = fibo2_h2;
		fibo2_h1 = h1;
		fibo2_h2 = h2;
	}
	printf("\n");
	return (0);
}
