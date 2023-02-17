#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  * main - Entry point
  * Description: 'a C program that prints last digit of a number '
  * Return: Always  0 (Success)
  */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d & it's greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d & it's 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit od %d is %d & it's less than 6 and not 0\n", n, last);
	return (0);
}
