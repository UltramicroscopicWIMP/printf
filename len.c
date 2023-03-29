#include "main.h"

/**
*bufLen- counts the lenght of a string
*@str: const char. An array of chars
*
*Return: int. Returns the number of chars in str
*/
int bufLen(const char *str)
{
	int count = 0;

	if (str != NULL)
	{
		while (*str != '\0')
		{
			count++;
			str++;
		}
	}
	return (count);
}
