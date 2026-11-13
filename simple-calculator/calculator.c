#include <stdio.h>

void print_menus(void);
void if_else_loops(void);
void add_numbers(void);
void sub_numbers(void);

/**
 * print_menus - Displays each new line of what's on the menu.
 */

void print_menus(void)
{
	printf("\n1) Add\n");
	printf("\n2) Subtract\n");
	printf("\n3) Multiply\n");
	printf("\n4) Divide\n");
	printf("\n0) Quit\n\n");
}



/**
 * if_else_loops - sets if-else conditions and while loops
 * for choice.
 */

void if_else_loops(void)
{
	int choice = -1;

	while (choice != 0)
	{
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("Bye\n");
		}
		else if (choice == 1)
		{
			add_numbers();
		}
		else if (choice == 2)
		{
			sub_numbers();
		}
		else if (choice >= 3 && choice <= 4)
		{
			printf("Operation not implemented yet.\n");
		}
		else
		{
			printf("Invalid choice. Please try again.\n");
		}
	}
}



/**
 * add_numbers - Prompts for two numbers, computes the sum,
 * and prints the result.
 */

void add_numbers(void)
{
	int a, b, result;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	result = a + b;
	printf("Result: %d\n", result);
}



/**
 * sub_numbers - Prompts for two numbers, computes the sum,
 * and prints the result.
 */

void sub_numbers(void)
{
	int a, b, result;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	result = a - b;
	printf("Result: %d\n", result);
}



/**
 * main - Starts, executes, and exits the program calculator.
 * Return: Always (0)
 */

int main(void)
{
	printf("\nWelcome to the Simple Calculator\n");
	print_menus();
	if_else_loops();

	return (0);
}
