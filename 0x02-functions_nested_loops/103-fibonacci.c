#include <stdio.h>
/**
* main - prints sum of fib numbers
* less than 4000000.
* Return: 0 Success
*/
int main(void)
{
	int i = 0;
	long x = 1, y = 2, sum = y;

	while (y + x < 4000000)
	{
		y += x;
		if (y % 2 == 0)
		{
			sum += y;
			x = y - x;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
