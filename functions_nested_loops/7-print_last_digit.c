#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number to extract the digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	/* If the number was negative, its remainder will be negative */
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	/* Print the digit by shifting it into its ASCII character range */
	_putchar(last_digit + '0');

	return (last_digit);
}
