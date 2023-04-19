#include <stdio.h>
void read_array(int arr[], int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read input numbers into the array
    }
}
void print_array(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each number in the array
    }
    printf("\n");
}
int find_small(int arr[], int n, int *pos) {
    int min = arr[0]; // Initialize min with the first element of the array
    *pos = 0; // Initialize pos with 0
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller number is found
            *pos = i; // Update pos with the position of the smaller number
        }
    }
    return min; // Return the smallest number
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; // Declare an array of size n
    read_array(arr, n); // Call read_array() to read input numbers into the array
    print_array(arr, n); // Call print_array() to print the array
    int pos; // To store the position of the smallest number
    int smallest = find_small(arr, n, &pos); // Call find_small() to find the smallest number and its position
    printf("Smallest number: %d\n", smallest);
    printf("Position of smallest number: %d\n", pos);
    return 0;
}
