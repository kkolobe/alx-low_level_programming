#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(n) * 8;
	unsigned int i;

	mask <<= size - 1;

	for (i = 0; i < size; i++)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');

		mask >>= 1;
	}
}
