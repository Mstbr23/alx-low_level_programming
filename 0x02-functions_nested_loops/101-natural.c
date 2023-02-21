#include <stdio.h>

/**
* main -  list numbers below 10 that are multiples of 3 or 5
* Description: prints 10 times the alphabet in lowercase
* Return: void
*/
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
