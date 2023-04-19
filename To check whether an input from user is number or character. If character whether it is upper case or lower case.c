#include <stdio.h>
#include <ctype.h>
int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    if (isalpha(input)) {
        printf("Input is a character.\n");
        if (isupper(input)) {
            printf("Character is uppercase.\n");
        } else if (islower(input)) {
            printf("Character is lowercase.\n");
        }
    } else {
        printf("Input is not a character.\n");
    }
    return 0;
}
