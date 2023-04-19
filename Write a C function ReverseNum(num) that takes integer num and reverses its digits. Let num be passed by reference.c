#include <stdio.h>
// Function to reverse the digits of a number
void ReverseNum(int *num) {
    int rev = 0; // Variable to store the reversed number
    while (*num != 0) {
        rev = rev * 10 + (*num) % 10;
        *num /= 10;
    }
    *num = rev;
}
int main() {
    int num; // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Original number: %d\n", num);
    ReverseNum(&num);
    printf("Reversed number: %d\n", num);
    return 0;
}
