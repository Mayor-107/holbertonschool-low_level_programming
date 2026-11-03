#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line,
 * except for 'q' and 'e'.
 *
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');

	return (0);
}
