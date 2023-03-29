#include "main.h"

/**
*_concat- Appends string2 to string 1
*@str1: The main string to be extended
*@str2: The subordinate string to be appended
*
*Return: char*. Returns a pointer to the concatenated string
*/
char* _concat(char *str1, char *str2)
{
	char *ptr1 = malloc(bufLen(str1) + bufLen(str2) + 1);
	int i = 0;

	if (str1 != NULL)
	{
		while (i < bufLen(str1))
		{
			ptr1[i] = str1[i];
			i++;
		}
	}
	if (str2 != NULL)
	{
		while (i < bufLen(str1) + bufLen(str2))
		{
			ptr1[i] = str2[i - bufLen(str1)];
			i++;
		}
		ptr1[i] = '\0';
	}
	return (ptr1);
}
