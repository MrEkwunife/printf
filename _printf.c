#include <stdarg.h>
#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(args, int);

				_write(&c);
				len++;
				i++;
			}

			else if (format[i + 1] == 's')
			{
				char *chars = va_arg(args, char *);

				_write(chars);
				len += sizeof(chars) - 1;
				i++;
			}

			else if (format[i + 1] == '%')
			{
				_write("%");
				len++;
				i++;
			}
			continue;
		}
		_write(&format[i]);
		len++;
	}
	return (len);
}

