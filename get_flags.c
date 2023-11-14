#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flag;
	const char flags_chr[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flags_int[] = {1, 2, 4, 8, 16, 0};

	for (curr_i = *i + 1; format[curr_i]; curr_i++)
	{
		for (j = 0; flags_chr[j]; j++)
			if (format[curr_i] == flags_chr[j])
			{
				flag = flags_int[j];
				break;
			}

		if (!flags_chr[j])
		{
			flag = 0;
			break;
		}
	}

	*i = curr_i - 1;

	return (flag);
}
