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
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/* Loop 2: Uppercase letters */
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	/* Print the final newline */
	putchar('\n');

	return (0);
}
