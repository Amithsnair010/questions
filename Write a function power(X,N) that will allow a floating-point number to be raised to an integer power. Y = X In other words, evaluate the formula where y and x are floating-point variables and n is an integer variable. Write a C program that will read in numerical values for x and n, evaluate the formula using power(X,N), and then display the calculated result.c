#include <stdio.h>
// Function to calculate power of a floating-point number
double power(double x, int n) {
    double result = 1.0;
    // If n is positive
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            result *= x;
        }
    }
    // If n is negative
    else if (n < 0) {
        for (int i = 1; i <= -n; i++) {
            result /= x;
        }
    }
    return result;
}
int main() {
    double x; // Input number
    int n; // Input integer
    printf("Enter value for x: ");
    scanf("%lf", &x);
    printf("Enter value for n: ");
    scanf("%d", &n);
    double result = power(x, n);
    printf("Result: %.2lf\n", result);
    return 0;
}
