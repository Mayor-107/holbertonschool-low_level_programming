#include "main.h"

/**
 * _isalpha - Written function that checks for alphabetic character.
 * @c: The character to check
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
