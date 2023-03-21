#include "main.h"
/**
 *_isalpha - shows 1 if the input is a
 *letter Another cases, show 0
 *
 *@c: The character is in ASCII code
 *
 *Return: 1 for letters, 0 for rest
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
