#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit number
 * Return: Always (Success)
 *
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);

}
