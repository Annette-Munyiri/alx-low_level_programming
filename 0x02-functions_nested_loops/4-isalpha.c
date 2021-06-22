#include "holberton.h"
/** Task Four: 4-isalpha.c*/
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be chacked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
