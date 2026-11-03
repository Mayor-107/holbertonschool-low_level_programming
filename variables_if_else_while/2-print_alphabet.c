#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: Always returns 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);

}
