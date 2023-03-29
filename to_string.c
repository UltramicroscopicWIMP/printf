#include "main.h"

/**
*to_string- converts an integral number to its string representation
*@n: An integral value
*
*Return: String representation of n
*/
char *to_string(int n)
{
	char *alias;
	char *token = malloc(numberof_digits(n) + 1);
	int num = _abs(n);
	int counter = 0;

	while (num > 0)
	{
		token[counter] = '0' + num%10;
		num = (num - num%10) / 10;
		counter++;
	}
	token[counter] = '\0';
	alias = token;
	token = reverse_token_n(token, n);
	free(alias);
	return (token);
}
/**
*reverse_token_n- prints an array of chars in reverse
*@str1: An array of char
*@n: The integral representation of the return value
*
*Return: An array of chars. Returns the reverse of str1
*/
char *reverse_token_n(char *str1, int n)
{
	char *ptr;
	int i = 0, k = 0;

	if (n < 0)
	{
		i = 1;
	}
	ptr = malloc(bufLen(str1) + i + 1);
	ptr[0] = '-';
	while (k < bufLen(str1))
	{
		ptr[i] = str1[bufLen(str1) - k - 1];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
