#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000 // Maximum size of input text
void count_chars_words_lines(const char *text, int *num_chars, int *num_words, int *num_lines) {
    *num_chars = *num_words = *num_lines = 0; // Initialize counters to 0
    int i = 0; // Index to traverse the text
    while (text[i] != '\0') {
        if (text[i] == '\n') {
            (*num_lines)++; // Count new line as a line
        }
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            // Count space, tab, and new line as word separators
            i++;
            continue;
        }
        (*num_chars)++; // Count each character as a character

        // Check if a word starts
        if (text[i] != ' ' && text[i] != '\t' && (text[i + 1] == ' ' || text[i + 1] == '\t' || text[i + 1] == '\n' || text[i + 1] == '\0')) {
            (*num_words)++; // Count each word as a word
        }
        i++;
    }
    (*num_lines)++; // Count the last line
}
int main() {
    char text[MAX_SIZE]; // Input text
    int num_chars, num_words, num_lines; // Counters
    printf("Enter text (up to %d characters):\n", MAX_SIZE);
    fgets(text, MAX_SIZE, stdin); // Read input text from user
    int len = strlen(text);
    if (text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
    printf("Text:\n%s\n", text); // Print the input text
    count_chars_words_lines(text, &num_chars, &num_words, &num_lines); 
    printf("Number of characters: %d\n", num_chars);
    printf("Number of words: %d\n", num_words);
    printf("Number of lines: %d\n", num_lines);
    return 0;
}
