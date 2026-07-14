#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;        /* This variable counts our 10 rows */
	char letter;  /* This variable holds our alphabet letters */

	i = 0;
	while (i < 10)  /* OUTER LOOP: Repeats everything inside 10 times */
	{
		letter = 'a';
		while (letter <= 'z')  /* INNER LOOP: Prints a to z once */
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');  /* Prints a newline at the end of each row */
		i++;             /* Move to the next row */
	}
}
