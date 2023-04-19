#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000 
int main() {
    char text[MAX_SIZE]; // Input text
    char *ptr; // Pointer to traverse the text
    int len; // Length of input text
    printf("Enter text (end with 'END' on a separate line):\n");
    // Read input text from user until "END" is entered on a separate line
    while (1) {
        fgets(text, MAX_SIZE, stdin); // Read input text from user
        // Remove trailing newline character from fgets()
        len = strlen(text);
        if (text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }
        // Check if "END" is entered
        if (strcmp(text, "END") == 0) {
            break;
        }
        // Print the input text
        printf("%s\n", text);
    }
    return 0;
}
