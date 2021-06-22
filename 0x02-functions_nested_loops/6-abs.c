#include "holberton.h"
/** Task Six: 6-abs.c*/
/**
 * _abs - computes the absolute value of an integer
 * @n: the int checked
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
