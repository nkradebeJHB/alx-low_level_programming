#include "main.h"

/**
 * _abs - give the absolute value of a number
 * @i: the number to check the abs value
 * Return: absolute value of the input number
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
