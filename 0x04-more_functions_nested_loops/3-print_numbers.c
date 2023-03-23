#include "main.h"
#include <stdio.h>

/**
 *print_number - prints value
 *
 *Return: void
 */

void print_number(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
