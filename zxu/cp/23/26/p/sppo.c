#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char prefix[100];
    char stack[100][100];
    int top = -1;
    int i;

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    for (i = strlen(prefix) - 1; i >= 0; i--) {

        if (isalnum(prefix[i])) {
            top++;
            stack[top][0] = prefix[i];
            stack[top][1] = '\0';
        }
        else {
            char operand1[100], operand2[100];

            strcpy(operand1, stack[top--]);
            strcpy(operand2, stack[top--]);

            top++;

            strcpy(stack[top], operand1);
            strcat(stack[top], operand2);

            int len = strlen(stack[top]);
            stack[top][len] = prefix[i];
            stack[top][len + 1] = '\0';
        }
    }

    printf("Postfix expression: %s\n", stack[top]);

    return 0;
}