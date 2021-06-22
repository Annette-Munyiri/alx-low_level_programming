#include "holberton.h"
/** Task Three: 3-islower.c*/
/**
 * _islower - checks for lowercae chracter
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
