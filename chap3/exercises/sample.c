#include <stdio.h>

int main(void) {
    float x;
    char c;
    printf("Enter a number and press Enter: ");
    scanf("%f", &x); // Reads the number, but leaves the newline ('\n') in the buffer
    scanf("%c", &c);
    if (c == '\n') {
        printf("Confirmed! The next scanf caught the leftover newline character ('\\n').\n");
    }
    return 0;
}
