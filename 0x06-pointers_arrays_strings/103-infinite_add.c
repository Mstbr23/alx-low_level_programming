#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
int i = 0;
int k = 0;
char temp;

while (*(n + i) != '\0')
{
i++;
}
i--;
for (k = 0; k < i; k++, i--)
{
temp = *(n + k);
*(n + k) = *(n + i);
*(n + i) = temp;
}
}

/**
* infinite_add - add 2 numbers together
* @nn: text representation of 1st number to add
* @m: text representation of 2nd number to add
* @r: pointer to buffer
* @size_r: buffer size
* Return: pointer to calling function
*/

char *infinite_add(char *nn, char *m, char *r, int size_r)
{
int overflow = 0, i = 0, k = 0, digits = 0;
int val1 = 0, val2 = 0, temp_tot = 0;

while (*(nn + i) != '\0')
i++;
while (*(m + k) != '\0')
k++;
i--;
k--;
if (k >= size_r || i >= size_r)
return (0);
while (k >= 0 || i >= 0 || overflow == 1)
{
if (i < 0)
val1 = 0;
else
val1 = *(nn + i) - '0';
if (k < 0)
val2 = 0;
else
val2 = *(m + k) - '0';
temp_tot = val1 + val2 + overflow;
if (temp_tot >= 10)
overflow = 1;
else
overflow = 0;
if (digits >= (size_r - 1))
return (0);
*(r + digits) = (temp_tot % 10) + '0';
digits++;
k--;
i--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
