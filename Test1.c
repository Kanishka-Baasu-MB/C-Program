#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;  // Safe division
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    // Display results
    printf("Number1: %d\n", num1);
    printf("Number2: %d\n", num2);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}
