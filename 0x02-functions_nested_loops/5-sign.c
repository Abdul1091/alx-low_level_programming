#include "main.h"

/**
 * print_sign - return the supposed sign of an integer
 * @n: print the sign of a number
 * Retun: 1 if true. 0 if n == 0, -1 if n<0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
