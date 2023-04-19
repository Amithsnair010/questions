#include <stdio.h>
#include <string.h>
// Function to reverse a string
void reverseString(char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;
    while (start < end) {
        temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;

        start++;
        end--;
    }
}

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 0; // Strings are equal
        }

        str1++;
        str2++;
    }

    return *str1 - *str2; // Return difference of first non-matching characters
}

// Function to concatenate two strings
void concatenateStrings(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
// Function to find substring in a string
char* findSubstring(const char *str, const char *sub) {
    int len1 = strlen(str);
    int len2 = strlen(sub);
    int i, j;
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (*(str + i + j) != *(sub + j)) {
                break;
            }
        }

        if (j == len2) {
            return (char*)(str + i);
        }
    }
    return NULL;
}
int main() {
    char str1[100], str2[100], str3[200]; // Input strings
    printf("Enter a string: ");
    gets(str1); // Read input string
    // Reverse the input string and print
    printf("Reversed string: ");
    reverseString(str1);
    printf("%s\n", str1);
    printf("Enter another string: ");
    gets(str2); // Read input string
    // Compare two input strings and print the result
    int cmp = compareStrings(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal.\n");
    } else if (cmp < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically greater than String 2.\n");
    }
    // Concatenate two input strings and print
    concatenateStrings(str3, str1);
    concatenateStrings(str3, str2);
    printf("Concatenated string: %s\n", str3);

    printf("Enter a substring to find: ");
    gets(str1); // Read input substring

    // Find substring in the concatenated string and print the result
    char *sub = findSubstring(str3, str1);
    if (sub != NULL) {
        printf("Substring found at position: %ld\n", sub - str3 + 1);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
