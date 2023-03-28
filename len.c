#include "main.h"

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
