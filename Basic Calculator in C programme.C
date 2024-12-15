#include <stdio.h>  // Standard input-output header

// Main function starts the program execution
int main() {
    int choice;  // Variable to store user choice
    float num1, num2, result;  // Variables for numbers and result

    // Display the calculator menu
    printf("Basic Calculator\n");
    printf("Select an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    // Read user's choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Prompt the user for input numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform calculation based on the user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;  // Addition
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;  // Subtraction
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;  // Multiplication
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {  // Check for division by zero
                result = num1 / num2;  // Division
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;  // Indicate that the program ended successfully
}
