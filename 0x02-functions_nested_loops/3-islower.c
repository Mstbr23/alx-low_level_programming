#include "main.h"
/**
* _Islower() - checks lowercase characters
* Description: checks lowercase chars using int c
* Return: always void
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
