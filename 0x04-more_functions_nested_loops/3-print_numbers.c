#include "main.h"

/**
 *print_number - entry point
 *@c: int
 *Return: always 0
 *
 */

int print_number(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
