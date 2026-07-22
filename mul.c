#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    double num1, num2;

    // Prompt user for input
    printf("Enter two numbers to multiply: ");

    // Validate input
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1; // Exit with error
    }

    // Perform multiplication
    double result = num1 * num2;

    // Display result
    printf("Result: %.2lf × %.2lf = %.2lf\n", num1, num2, result);

    return 0; // Successful execution
}
