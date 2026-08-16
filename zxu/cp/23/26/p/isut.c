#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");

    while ((str[i] = getchar()) != '\n' && str[i] != EOF) {
        i++;
    }

    str[i] = '\0';

    printf("Reversed string: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}