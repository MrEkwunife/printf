#include <stdarg.h>
#include <unistd.h>


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

				write(1, &c, 1);
				len++;
				i++;
			}

			else if (format[i + 1] == 's')
			{
				char *chars = va_arg(args, char *);

				write(1, chars, sizeof(chars) - 1);
				len += sizeof(chars) - 2;
				i++;
			}

			else if (format[i + 1] == '%' || format[i + 1])
			{
				write(1, "%", 1);
				len++;
				i++;
			}
			continue;
		}
		write(1, &format[i], 1);
		len++;
	}
	va_end(args)
	return (len);
}

