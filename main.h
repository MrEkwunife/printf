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
int is_printable(char c);
int append_hexa_code(char ascii_code, char buffer[], int i);
int is_digit(char c);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
int write_char(char c, char buffer[],
        int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
        int flags, int width, int precision, int size);
int write_num(int ind, char buffer[],
        int flags, int width, int prec,
        int length, char padd, char extra_c);
int write_unsgnd(int is_negative, int ind,
        char buffer[],
        int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length,
        int width, int flags, char padd, char extra_c, int padd_start);
int print_unsigned(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[],
        int flags, char flag_ch, int width, int precision, int size);
int print_pointer(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_non_printable(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int delegate_print(const char *fmt, int *ind, va_list args, char buffer[],
		int flags, int width, int precision, int size);

#endif

