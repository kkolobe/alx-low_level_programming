#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * Return: Always (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
