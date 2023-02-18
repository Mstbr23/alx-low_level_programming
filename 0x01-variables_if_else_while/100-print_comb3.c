#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * Description: 'a C program that print a specific text'
  * Return: Always  0 (Success)
  */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
if (i != j)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
