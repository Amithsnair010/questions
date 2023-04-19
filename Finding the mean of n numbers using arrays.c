#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, mean;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]); // Read input numbers into the array
        sum += numbers[i]; // Add each number to the sum
    }
    mean = sum / n; // Calculate the mean
    printf("Mean of %d numbers: %.2f\n", n, mean);
    return 0;
}
