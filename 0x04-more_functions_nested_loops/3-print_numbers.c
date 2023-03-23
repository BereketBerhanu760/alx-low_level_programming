#include "main.h"

/**
 *print_number - prints value*
 *
 * _putchar - prints char
 *Return: nothing
 */

void print_number(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
