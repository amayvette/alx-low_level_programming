#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if it is in uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
