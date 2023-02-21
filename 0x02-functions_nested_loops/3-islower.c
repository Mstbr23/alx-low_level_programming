#include "main.h"
/**
* _islower - checks lowercase characters
* @c: the carachter to be checked
* Return: 1 for lowercase, 0 if upercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
