#include <stdio.h>

int main(int argc, char *argv[])
{	
	int num1;
        int num2;
        int sum;
        int product;
        int difference;

	(void) argc;
        (void)argv;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	printf("Sum: %d\n", sum);
	printf("Product: %d\n", product);
	printf("Difference: %d\n", difference);
	return 0;
}
