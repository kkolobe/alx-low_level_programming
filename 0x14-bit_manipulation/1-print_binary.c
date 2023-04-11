#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary.
 **/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_pos = (sizeof(unsigned long int) * 8) - 1;
	int bit_printed = 0;

	while (bit_pos >= 0)
	{
		if ((n & (mask << bit_pos)) == (mask << bit_pos))
		{
			_putchar('1');
			bit_printed = 1;
		}
		else if (bit_printed)
			_putchar('0');

		bit_pos--;
	}

	if (!bit_printed)
		_putchar('0');
}
