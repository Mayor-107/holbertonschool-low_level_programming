#include <stdio.h>

/**
 * row_sum - computes the sum of row products up to cols
 * @row: the current row number
 * @cols: the number of columns
 *
 * Return: the sum for the given row
 */
int row_sum(int row, int cols)
{
	int c;
	int sum = 0;

	for (c = 1; c <= cols; c++)
		sum += row * c;

	return (sum);
}

/**
 * total_sum - computes the total sum across all rows and columns
 * @rows: the total number of rows
 * @cols: the total number of columns
 *
 * Return: the combined total sum
 */
int total_sum(int rows, int cols)
{
	int r;
	int total = 0;

	for (r = 1; r <= rows; r++)
	{
		total += row_sum(r, cols);
	}

	return (total);
}

/* -- DO NOT Modify the code below this line -- */
/**
 * main - prints sum_to_n function
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", total_sum(3, 3));
	return (0);
}
