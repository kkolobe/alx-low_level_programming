#include <unistd.h>
#include <stdlib.h>

/** 
 * main - Prints _putchar
 * Return: On success 1.
 * On error, -1 is returned, and an errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
