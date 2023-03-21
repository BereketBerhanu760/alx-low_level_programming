#include "main.h"
/**
 * 
 *_islower - shows l if the input is a
 *lowercase character. Another cases, shows
 *0
 *
 *@c: The character is ASCII code
 * 
 *Return: 1 for lower case character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
