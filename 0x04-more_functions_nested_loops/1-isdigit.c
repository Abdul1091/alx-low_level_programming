#include "main.h"
/**
 * _isdigit - checks wether a number passed an argument is digit number
 * @value: argument to be checked
 * Return: returns 1 if success or 0 if otherwise
 */
int _isgidit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
