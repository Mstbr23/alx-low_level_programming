#include <stdio.h>
#include "main.h"

/**
* _atoi - converts a string to an integer
* @M: string to be converted
* Return: the int converted from the string
*/
int _atoi(char *M)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (M[len] != '\0')
len++;
while (i < len && f == 0)
{
if (M[i] == '-')
++d;
if (M[i] >= '0' && M[i] <= '9')
{
digit = M[i] - '0';
if (d % 2)
{
digit = -digit;
n = n * 10 + digit;
f = 1;
}
if (M[i + 1] < '0' || M[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
{
return (0);
}
return (n);
}
/**
 * main - multiplies two numbers
 * @arg1: number of arguments
 * @arg2: array of arguments
 * Return: 0 (Success)
 */
int main(int arg1, char *arg2[])
{
int result, num1, num2;
if (arg1 < 3 || arg1 > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(arg2[1]);
num2 = _atoi(arg2[2]);
result = num1 * num2;

printf("%d\n", result);
return (0);
}
