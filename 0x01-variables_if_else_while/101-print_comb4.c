#include <stdio.h>
/**
  * main - Entry point
  * Description: 'a C program that print a digit combinations'
  * Return: Always  0 (Success)
  */
int main(void)
{
for (int i = 0; i <= 7; i++)
{
for (int j = i + 1; j <= 8; j++)
{
for (int k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
