#include <stdio.h>

int isAlphabet(char c) {

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (isAlphabet(c)) {
        printf("%c is an alphabet.\n", c);
    } else {
        printf("%c is not an alphabet.\n", c);
    }

    return 0;
}