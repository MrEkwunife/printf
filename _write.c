#include <unistd.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
ssize_t _write(const char *chars)
{
	return write(STDOUT_FILENO, chars, sizeof(chars) -1);
}

