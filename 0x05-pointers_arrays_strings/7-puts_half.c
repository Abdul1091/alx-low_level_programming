#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: half string
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}

	_puts('\n');
}
