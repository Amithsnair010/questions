#include <stdio.h>
int main() {
    int m, n, i;
    float sum = 0, average;
    // Get input for m and n
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // Calculate sum of numbers from m to n
    for (i = m; i <= n; i++) {
        sum += i;
    }
    // Calculate average
    average = sum / (n - m + 1);
    // Display sum and average
    printf("Sum of numbers from %d to %d: %.0f\n", m, n, sum);
    printf("Average of numbers from %d to %d: %.2f\n", m, n, average);
    return 0;
}
