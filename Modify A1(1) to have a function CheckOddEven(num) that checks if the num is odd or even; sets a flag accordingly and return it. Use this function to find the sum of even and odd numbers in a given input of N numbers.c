#include <stdio.h>
// Function to check if a number is odd or even
int CheckOddEven(int num) {
    if (num % 2 == 0) {
        return 1; // Flag 1 for even number
    } else {
        return 0; // Flag 0 for odd number
    }
}
int main() {
    int N; // Number of input numbers
    int num; // Input number
    int evenSum = 0; // Sum of even numbers
    int oddSum = 0; // Sum of odd numbers
    printf("Enter the number of numbers (N): ");
    scanf("%d", &N);
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        // Check if the number is odd or even and update the sums accordingly
        if (CheckOddEven(num)) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
    return 0;
}
