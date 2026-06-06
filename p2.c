// determine a character a entered by user 

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Press any key: ");
    if (scanf("%c", &ch) != 1) return 1;

    if (isalpha((unsigned char)ch)) {
        printf("The user has entered a letter: %c\n", ch);
    } else if (isdigit((unsigned char)ch)) {
        printf("The user entered a digit: %c\n", ch);
    } else if (ispunct((unsigned char)ch)) {
        printf("The user entered a punctuation mark: %c\n", ch);
    } else if (isspace((unsigned char)ch)) {
        printf("The user entered a whitespace character\n");
    } else if (isprint((unsigned char)ch)) {
        printf("The user entered a printable character: %c\n", ch);
    } else {
        printf("Non-printable control character\n");
    }

    return 0;
}