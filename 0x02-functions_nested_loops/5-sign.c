#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @c: it the int that will use for the argument of the function
 * Retun: 1 if true. 0 if false
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
	}
	else
	{
	_putchar('0');
	return (0);
}
