#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line, using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Loop 1: Print numbers 0 to 9 */
	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	/* Loop 2: Print letters a to f */
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	/* Print the final newline */
	putchar('\n');

	return (0);
}
