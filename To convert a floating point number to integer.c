#include <stdio.h>

int main() {
    float floatNumber
    int intNumber;
    scanf("%f",&floatNumber);
    // Convert floatNumber to an integer using type casting
    intNumber = (int)floatNumber;
    printf("Floating-point number: %.2f\n", floatNumber);
    printf("Integer number: %d\n", intNumber);
    return 0;
}
