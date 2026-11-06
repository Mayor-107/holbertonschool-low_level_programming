#include <stdio.h>

/**
 * sum_to_n - computes the sum of integers from 1 up to n
 * @n: the upper limit number
 * main - prints sum_to_n function.
 *
 * Return: the total sum
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;

	return (sum);
}

/* -- DO NOT Modify the code below this line -- */
/**
 * main - prints sum_to_n function
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
