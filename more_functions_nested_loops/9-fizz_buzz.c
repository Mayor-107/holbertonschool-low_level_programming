#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, substituting multiples of 3, 5,
 *        and both 3 and 5 with Fizz, Buzz, and FizzBuzz respectively.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
