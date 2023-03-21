#include "main.h"
/**
 *
 *main - Entry point
 *_islower - shows l if the input is a
 *lowercase character. Another cases, shows
 *0
 *
 *@c: The character is ASCII code
 * 
 *Return:  always 0
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
