#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row = 0;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row < size)
	{
		spaces = 0;
		while (spaces < size - 1 - row)
		{
			_putchar(' ');
			spaces++;
		}

		hashes = 0;
		while (hashes <= row)
		{
			_putchar('#');
			hashes++;
		}

		_putchar('\n');
		row++;
	}
}
