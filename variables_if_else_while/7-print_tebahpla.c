#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by
 * a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
