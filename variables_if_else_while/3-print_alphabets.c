#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 * followed by a new line, using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Loop 1: Lowercase letters */
	for (ch	= 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* Loop 2: Uppercase letters */
	for (ch	'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/* Print the final newline */
	putchar('\n');

	return (0);
}
