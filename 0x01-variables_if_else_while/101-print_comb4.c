#include <stdio.h>
/**
  * main - Entry point
  * Description: 'a C program that print a specific text'
  * Return: Always  0 (Success)
  */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
if (i != j && i != k && j != k)
{
int smallest = (i < j && i < k) ? i : ((j < k) ? j : k);
putchar(smallest + '0');
if (smallest == i)
{
putchar(j + '0');
putchar(k + '0');
}
else if (smallest == j)
{
putchar(i + '0');
putchar(k + '0');
}
else
{
putchar(i + '0');
putchar(j + '0');
}
if (i < 7 || (i == 7 && j < 8))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
