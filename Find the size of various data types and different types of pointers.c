#include <stdio.h>
int main() {
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    printf("Size of pointer to char: %lu bytes\n", sizeof(char*));
    printf("Size of pointer to short: %lu bytes\n", sizeof(short*));
    printf("Size of pointer to int: %lu bytes\n", sizeof(int*));
    printf("Size of pointer to long: %lu bytes\n", sizeof(long*));
    printf("Size of pointer to long long: %lu bytes\n", sizeof(long long*));
    printf("Size of pointer to float: %lu bytes\n", sizeof(float*));
    printf("Size of pointer to double: %lu bytes\n", sizeof(double*));
    printf("Size of pointer to long double: %lu bytes\n", sizeof(long double*));
    return 0;
}
