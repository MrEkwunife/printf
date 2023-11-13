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
	int i, len = 0, s = 0;

	va_start(args, format);

	while (format[s])
		s++;

	for (i = 0; format && format[i]; i++)
	{
		if (i >= s)
			break;
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(args, int);

				len++;
				write(1, &c, 1);
				i++;
			}

			else if (format[i + 1] == 's')
			{
				char *chars = va_arg(args, char *);
				int d = 0;

				while (chars[d])
					d++;
				write(1, chars, d);
				len += d;
				i++;
			}

			else if (format[i + 1] == '%' || !format[i + 1])
			{
				write(1, "%", 1);
				len++;
				i++;
			}
			else if (format[i + 1])
			{
				write(1, &format[i + 1], 1);
				len++;
				i++;
			}
			continue;
		}
		write(1, &format[i], 1);
		len++;
	}
	va_end(args);
	return (len);
}

