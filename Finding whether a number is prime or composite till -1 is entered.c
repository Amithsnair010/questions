#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    while (1) {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            break; // Exit loop if -1 is entered
        }
        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is a composite number.\n", num);
        }
    }
    return 0;
}
