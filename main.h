#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define SUPPRESS(x) (void)(x)

typedef struct fmtdef
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
} fmt_t;
int _printf(const char *format, ...);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void print_buffer(char buffer[], int *buff_ind);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int print_char(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
        int flags, int width, int precision, int size);

#endif

