#include "main.h"
#include <unistd.h>

/**
 * print_buffer - prints the contents of the buffer if it exist
 * @buffer: arrays of chars
 * @buff_ind: index at whic to add next char, represents the length.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
