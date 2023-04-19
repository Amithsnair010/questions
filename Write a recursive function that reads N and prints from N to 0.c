#include <stdio.h>
// Recursive function to print numbers from N to 0
void printNumbersFromN(int N) {
    if (N == 0) {
        printf("%d ", N);
        return;
    } else {
        printf("%d ", N);
        printNumbersFromN(N - 1);
    }
}
int main() {
    int N; // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    // Call the recursive function to print numbers from N to 0
    printf("Numbers from %d to 0: ", N);
    printNumbersFromN(N);
    printf("\n");
    return 0;
}
