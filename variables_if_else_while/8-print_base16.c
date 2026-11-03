#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (exit)
 */

int main(void)
{
	int num = 48;
	char ch = 'a';

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
