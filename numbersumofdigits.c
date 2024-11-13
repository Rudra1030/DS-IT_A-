#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int number;

    // Input a non-negative number
    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit with an error code
    }

    // Reduce the number to a single digit
    while (number >= 10) {
        number = sumOfDigits(number);
    }

    // Output the result
    printf("The single digit result is: %d\n", number);
    return 0;
}