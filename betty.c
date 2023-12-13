#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int sum;
	int difference;

	/*Ask for user input*/
	printf("Input first number: ");
	scanf("%d", &num);
	printf("Enter second number: ");
	scanf("%d", &num2);

	/*Calculate the sum and difference*/
	sum = num1 + num2;
	difference = num1 - num2;

	/*Print Results*/
	printf("Sum of %d and %d is: %d\n", num1, num2, sum);
	printf("Difference of %d and %d is: %d\n", num1, num2, difference);

	return (0);
}
