#include "main.h"

int _printf(const char *format, ...)
{
	char *buffer, *alias;
	int length = bufLen(format);
	int size = 0, i = 0;
	char specifier;
	char* token = malloc(2);
	va_list nxt_param;

	buffer = NULL;
	va_start(nxt_param, format);
	while (i < length)
	{
		if (format[i] != '%')
		{
			alias = buffer;
			token[0] = format[i];
			token[1] = '\0';
			buffer = _concat(buffer, token);
			if (alias != NULL)
			{
				free(alias);
			}
			i++;
		}
		else
		{
			alias = buffer;
			specifier = format[i + 1];
			switch (specifier)
			{
				case 'c':
					token[0] = va_arg(nxt_param, int);
					token[1] = '\0';
					buffer = _concat(buffer, token);
					break;
				case '%':
					token[0] = specifier;
					token[1] = '\0';
					buffer = _concat(buffer, token);
					break;
				case 's':
					buffer = _concat(buffer, va_arg(nxt_param, char*));
					break;
				default:
					buffer = "Error: expected specifier-list";
					break;
			}
			if (alias != NULL)
			{
				free(alias);
			}
			i = i + 2;
		}
	}
	va_end(nxt_param);
	size = bufLen(buffer);
	write(1, buffer, size);
	free(buffer);
	free(token);
	return (size);
}
