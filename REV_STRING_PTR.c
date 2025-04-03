#include <stdio.h>

void reverseString(char *str) {
    char *start = str; // Pointer to the start of the string
    char *end = str;   // Pointer to the end of the string

    // Move the end pointer to the last character
    while (*end) {
        end++;
    }
    end--; // Set to the last character

    // Swap characters from start and end until they meet
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "MyVIT!";
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}
